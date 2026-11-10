/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d6b54; name: FUN_007d6b54
 */


long FUN_007d6b54(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,uint param_5
                 ,undefined8 param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_a0 [64];
  
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = 0;
  }
  puVar1 = PTR_DAT_047d0860;
  uVar2 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar3 = FUN_007e2bb4(uVar2,param_2);
  if (lVar3 == 0) {
    uVar2 = FUN_01f7c4e8(*(undefined8 *)puVar1);
    lVar3 = FUN_007e2cc8(uVar2,param_7 & 1,param_2,param_6);
    if (lVar3 != 0) {
      FUN_007e5350(lVar3 + 0x90,param_4,param_5 & 1);
      if ((param_8 & 1) != 0) {
        FUN_007e5190(auStack_a0);
        FUN_007e5348(auStack_a0,param_3);
        FUN_007e5340(auStack_a0,param_2);
        FUN_007e5338(auStack_a0,param_6);
        FUN_007e5350(auStack_a0,param_4,param_5 & 1);
        FUN_007e1bc4(lVar3,auStack_a0);
        FUN_007e51d0(auStack_a0);
      }
      uVar4 = FUN_007e02e8(*(undefined8 *)PTR_DAT_047d11a0,lVar3,param_3,param_7 & 1);
      if ((uVar4 & 1) == 0) {
        lVar3 = 0;
      }
      else if ((((*(long *)(param_1 + 0x130) != 0) && ((param_7 & 1) == 0)) &&
               (uVar4 = FUN_007dea30(*(long *)(param_1 + 0x130),param_6),
               param_9 != (undefined1 *)0x0)) && ((uVar4 & 1) != 0)) {
        *param_9 = 1;
      }
    }
  }
  return lVar3;
}


