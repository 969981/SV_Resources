/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d7520; name: FUN_015d7520
 */


undefined8 FUN_015d7520(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (((DAT_0483b190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b190), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b190);
  }
  DAT_0483b198 = DAT_0483b180;
  uVar2 = *param_1;
  for (plVar3 = *(long **)(DAT_0483b180 + 0x620); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if ((ulong)plVar3[4] <= uVar2) {
      if (uVar2 <= (ulong)plVar3[4]) {
        DAT_0483b198 = DAT_0483b180;
        return 0;
      }
      plVar3 = plVar3 + 1;
    }
  }
  plVar3 = *(long **)(DAT_0483b180 + 0x658);
  do {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if ((ulong)plVar3[4] <= uVar2) {
      if (uVar2 <= (ulong)plVar3[4]) {
        DAT_0483b198 = DAT_0483b180;
        return 1;
      }
      plVar3 = plVar3 + 1;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


