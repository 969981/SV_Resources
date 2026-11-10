/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02899b10; name: FUN_02899b10
 */


void FUN_02899b10(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_58;
  undefined2 local_50;
  undefined1 local_48 [4];
  byte local_44 [4];
  undefined8 local_28;
  
  if ((((*(long *)(param_2 + 0xb8) == 0) || (*(char *)(*(long *)(param_2 + 0xb8) + 0x42) != '\0'))
      && (*param_3 != 0)) && (lVar4 = *(long *)(*param_3 + 0x10), lVar4 != 0)) {
    lVar4 = lVar4 + -0x28;
    uVar2 = FUN_014bfb64(lVar4);
    if ((uVar2 & 1) == 0) {
      bVar1 = FUN_013fcabc(lVar4);
      local_48[0] = 2;
      local_44[0] = bVar1;
      uVar3 = FUN_0289b008(*(undefined8 *)(param_2 + 8),local_48,local_44);
      FUN_019ab988(&local_28,uVar3);
      local_58 = *(ulong *)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0xb8) = 0;
      FUN_019ab920(&local_58);
      uVar3 = local_28;
      local_28 = 0;
      *(undefined8 *)(param_2 + 0xb8) = uVar3;
      FUN_019ab920(&local_28);
      if (*(long *)(param_2 + 0xb8) != 0) {
        local_50 = 0;
        local_58 = (ulong)bVar1;
        snprintf((char *)((ulong)&local_58 | 1),9,"%s",*(undefined8 *)(param_4 + 8));
        uVar2 = FUN_0289c2d4(param_2,&local_58);
        if ((uVar2 & 1) != 0) {
          FUN_01aa2cf0(param_1,*(undefined8 *)(param_2 + 0xb8));
          return;
        }
        local_28 = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xb8) = 0;
        FUN_019ab920(&local_28);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


