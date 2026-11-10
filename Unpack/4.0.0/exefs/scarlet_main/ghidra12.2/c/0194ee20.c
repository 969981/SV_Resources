/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194ee20; name: FUN_0194ee20
 */


undefined8 FUN_0194ee20(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pbVar5 = (byte *)*puVar3, pbVar5 == (byte *)0x0)) {
    if ((*PTR_DAT_047d6570 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d6570);
      pbVar5 = PTR_DAT_047d6578;
      if (iVar2 != 0) {
        *PTR_DAT_047d6578 = 0;
        *(undefined8 *)(pbVar5 + 8) = 0;
        FUN_00100190(&LAB_01c9b0d8,pbVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6570);
      }
    }
    else {
      pbVar5 = PTR_DAT_047d6578;
    }
  }
  if (((DAT_04816ee8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04816ee8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04816ee8);
  }
  if (*pbVar5 < 2) {
    uVar4 = *(undefined8 *)(pbVar5 + 8);
  }
  else {
    uVar4 = 0;
  }
  uVar1 = FUN_0194ef24(uVar4);
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


