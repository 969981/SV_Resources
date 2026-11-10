/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012be0dc; name: FUN_012be0dc
 */


void FUN_012be0dc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  FUN_012be1b0(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x128));
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047dab48;
  local_30 = 0x95e2585faec1683f;
  pcStack_28 = "event/trevt/bin/event.trevt";
  local_20 = 0x1b;
  local_18 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047dab50 = uVar2;
  FUN_012c2fcc(uVar2,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


