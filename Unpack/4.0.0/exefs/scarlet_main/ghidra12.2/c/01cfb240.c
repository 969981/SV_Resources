/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfb240; name: FUN_01cfb240
 */


undefined8 FUN_01cfb240(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_01cfb300(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if ((DAT_0481c3c8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0481c3c8);
    if (iVar1 != 0) {
      DAT_0481c3b8 = PTR_FUN_047d7020;
      DAT_0481c3c0 = 0;
      __cxa_guard_release(&DAT_0481c3c8,extraout_x1,uVar3);
    }
  }
  FUN_01cfb38c(auStack_38,&DAT_0481c3b8,uVar2,uVar3);
  FUN_01cfb3f0(param_1,auStack_38);
  FUN_01cfb4c8(auStack_38);
  return 1;
}


