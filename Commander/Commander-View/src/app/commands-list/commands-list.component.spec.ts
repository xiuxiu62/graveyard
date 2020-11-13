import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { CommandsListComponent } from './commands-list.component';

describe('CommandsListComponent', () => {
  let component: CommandsListComponent;
  let fixture: ComponentFixture<CommandsListComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ CommandsListComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(CommandsListComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
