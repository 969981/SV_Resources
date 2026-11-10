/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebde84; name: FUN_01ebde84
 */


void FUN_01ebde84(long param_1,long *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  char cVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  char local_50 [2];
  ushort local_4e;
  undefined8 local_48;
  ulong uStack_40;
  undefined4 local_34;
  
  local_34 = 0;
  param_2 = (long *)*param_2;
  if (((param_2 != (long *)0x0) &&
      (cVar2 = *(char *)(*param_2 + param_2[2]), param_2[2] = param_2[2] + 1, cVar2 == -0x47)) &&
     (FUN_01ebf2ac(&local_48,&local_34), (int)local_48 == 0)) {
    uVar4 = (ulong)local_34._2_2_;
    uVar5 = (ulong)(byte)local_34;
    puVar3 = *(ushort **)(param_1 + 0x88);
    puVar1 = *(ushort **)(param_1 + 0x90);
    uStack_40 = ((ulong)local_34._2_2_ & 0x3fff) << 2 | uVar5 & 3;
    if ((puVar3 != puVar1) && ((uint)*puVar3 != (uint)uStack_40)) {
      do {
        puVar3 = puVar3 + 0x60;
        if (puVar1 == puVar3) {
          puVar3 = puVar1;
          goto LAB_01ebdf1c;
        }
      } while ((uint)*puVar3 != (uint)uStack_40);
    }
LAB_01ebdf1c:
    if (puVar1 == puVar3) {
      local_48 = *param_3;
      FUN_01ebf3f8(param_1 + 0x430,&local_48);
    }
    else {
      FUN_01077654(local_50);
      if (local_50[0] != '\0') {
        local_48 = *param_3;
        uStack_40 = uVar5 & 3 | (uVar4 & 0x3fff) << 0x10 | (ulong)(local_4e & 3) << 0x20 |
                    (ulong)(local_4e >> 2) << 0x30;
        FUN_019da380(param_1 + 0x3f8,&local_48);
      }
    }
  }
  return;
}


