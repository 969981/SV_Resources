/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02899d6c; name: FUN_02899d6c
 */


void FUN_02899d6c(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined1 local_44 [4];
  undefined8 local_28;
  
  if ((((*(long *)(param_2 + 0xb8) == 0) || (*(char *)(*(long *)(param_2 + 0xb8) + 0x42) != '\0'))
      && (*param_3 != 0)) && (lVar4 = *(long *)(*param_3 + 0x10), lVar4 != 0)) {
    lVar4 = lVar4 + -0x28;
    uVar2 = FUN_014bfb64(lVar4);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_013fcabc(lVar4);
      local_54[0] = 4;
      local_44[0] = uVar1;
      uVar3 = FUN_0289b008(*(undefined8 *)(param_2 + 8),local_54,local_44);
      FUN_019ab988(&local_50,uVar3);
      local_28 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0xb8) = 0;
      FUN_019ab920(&local_28);
      uVar3 = local_50;
      local_50 = 0;
      *(undefined8 *)(param_2 + 0xb8) = uVar3;
      FUN_019ab920(&local_50);
      if (*(long *)(param_2 + 0xb8) != 0) {
        uVar2 = FUN_01f64924(lVar4);
        if ((uVar2 & 1) == 0) {
          local_50 = CONCAT71(local_50._1_7_,uVar1);
          uVar2 = FUN_0289c524(param_2,&local_50);
          if ((uVar2 & 1) == 0) {
            local_28 = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xb8) = 0;
            FUN_019ab920(&local_28);
            goto LAB_02899da8;
          }
        }
        else {
          lVar4 = *(long *)(param_2 + 0xb8);
          *(undefined2 *)(lVar4 + 0x42) = 1;
          FUN_00d8e6c4(lVar4 + 0x48,param_3);
        }
        FUN_01aa2cf0(param_1,*(undefined8 *)(param_2 + 0xb8));
        return;
      }
    }
  }
LAB_02899da8:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


