/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f64c3c; name: FUN_01f64c3c
 */


void FUN_01f64c3c(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined1 local_34 [4];
  undefined8 local_18;
  
  if ((((*(long *)(param_2 + 0xb8) == 0) || (*(char *)(*(long *)(param_2 + 0xb8) + 0x42) != '\0'))
      && (*param_3 != 0)) &&
     ((*(short *)(*param_3 + 0x1a) != 0 &&
      (puVar1 = *(undefined8 **)(param_2 + 0x48),
      puVar3 = (undefined8 *)FUN_0289af80(*(undefined8 *)(param_2 + 0x40),puVar1), puVar1 != puVar3)
      ))) {
    uVar2 = FUN_013fcabc(*puVar3);
    local_44[0] = 1;
    local_34[0] = uVar2;
    uVar4 = FUN_0289b008(*(undefined8 *)(param_2 + 8),local_44,local_34);
    FUN_019ab988(&local_40,uVar4);
    local_18 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    FUN_019ab920(&local_18);
    uVar4 = local_40;
    local_40 = 0;
    *(undefined8 *)(param_2 + 0xb8) = uVar4;
    FUN_019ab920(&local_40);
    if (*(long *)(param_2 + 0xb8) != 0) {
      local_40 = CONCAT71(local_40._1_7_,uVar2);
      uVar5 = FUN_0289b140(param_2,&local_40);
      if ((uVar5 & 1) != 0) {
        FUN_01aa2cf0(param_1,*(undefined8 *)(param_2 + 0xb8));
        return;
      }
      local_18 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0xb8) = 0;
      FUN_019ab920(&local_18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


