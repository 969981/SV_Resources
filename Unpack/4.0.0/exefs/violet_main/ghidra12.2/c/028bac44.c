/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bac44; name: FUN_028bac44
 */


undefined8 FUN_028bac44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 auStack_158 [8];
  long local_150;
  undefined1 auStack_118 [8];
  long local_110;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined1 auStack_80 [8];
  long local_78;
  
  if ((((*(long *)(param_1 + 0x180) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x180) + 0x1e8) & 1) == 0)) ||
      (*(long *)(param_1 + 0x140) == 0)) ||
     ((*(byte *)(*(long *)(param_1 + 0x140) + 0x1e8) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_00fb9e50(&local_d8,param_1 + 0x138,param_1 + 0x178);
    if (((local_78 == 0) || ((*(byte *)(local_78 + 0x1e8) & 1) != 0)) &&
       ((local_b8 == 0 || ((*(byte *)(local_b8 + 0x1e8) & 1) != 0)))) {
      local_170 = local_d8;
      local_168 = uStack_d0;
      local_160 = local_c8;
    }
    else {
      local_168 = 0;
      local_160 = 0;
      local_170 = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x1d0);
    puVar1 = *(undefined8 **)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x128) = local_168;
    *(undefined8 *)(param_1 + 0x130) = local_160;
    *(undefined8 *)(param_1 + 0x120) = local_170;
    if (puVar3 == puVar1) {
      uVar2 = 1;
    }
    else {
      do {
        if (((puVar3[0xc] == 0) || ((*(byte *)(puVar3[0xc] + 0x1e8) & 1) == 0)) ||
           ((puVar3[4] == 0 || ((*(byte *)(puVar3[4] + 0x1e8) & 1) == 0)))) {
          uVar2 = 0;
          break;
        }
        FUN_00fb9e50(&local_170,puVar3 + 3,puVar3 + 0xb);
        if (((local_110 == 0) || ((*(byte *)(local_110 + 0x1e8) & 1) != 0)) &&
           ((local_150 == 0 || ((*(byte *)(local_150 + 0x1e8) & 1) != 0)))) {
          local_188 = local_170;
          local_180 = local_168;
          local_178 = local_160;
        }
        else {
          local_180 = 0;
          local_178 = 0;
          local_188 = 0;
        }
        puVar3[1] = local_180;
        puVar3[2] = local_178;
        puVar4 = puVar3 + 0x16;
        *puVar3 = local_188;
        FUN_00db239c(auStack_118);
        FUN_00db239c(auStack_158);
        uVar2 = 1;
        puVar3 = puVar4;
      } while (puVar1 != puVar4);
    }
    FUN_00db239c(auStack_80);
    FUN_00db239c(auStack_c0);
  }
  return uVar2;
}


