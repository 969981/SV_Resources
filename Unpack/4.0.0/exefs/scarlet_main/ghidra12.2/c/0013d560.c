/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013d560; name: FUN_0013d560
 */


undefined8 * FUN_0013d560(long param_1,ulong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong local_28;
  
  switch((byte)param_2[1] & 0x3f) {
  case 0:
    return &DAT_03cb6488;
  default:
switchD_0013d5a4_caseD_1:
    puVar4 = (undefined8 *)FUN_0013d3d0(param_1,param_2,0);
    return puVar4;
  case 3:
    local_28 = *param_2;
    uVar5 = local_28 - 1;
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar5 < uVar2) goto LAB_0013d71c;
    if ((((uVar2 & uVar2 - 1) == 0) || (-1 < *(char *)(param_1 + 10))) ||
       ((local_28 != uVar2 + 1 &&
        (uVar2 = uVar2 | uVar2 >> 1, uVar2 = uVar2 | uVar2 >> 2, uVar2 = uVar2 | uVar2 >> 4,
        uVar2 = uVar2 | uVar2 >> 8, (uVar2 | uVar2 >> 0x10) + 1 <= uVar5)))) {
      puVar4 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (long)(int)((uint)local_28 &
                          (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18);
      do {
        if ((*(char *)((long)puVar4 + 9) == '\x03') && (puVar4[2] == local_28)) {
          return puVar4;
        }
        piVar1 = (int *)((long)puVar4 + 0xc);
        puVar4 = puVar4 + (long)*piVar1 * 3;
      } while (*piVar1 != 0);
      goto LAB_0013d7a4;
    }
    break;
  case 4:
    puVar4 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (long)(int)(*(uint *)(*param_2 + 0xc) &
                        (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18);
    do {
      if ((*(char *)((long)puVar4 + 9) == 'D') && (puVar4[2] == *param_2)) {
        return puVar4;
      }
      piVar1 = (int *)((long)puVar4 + 0xc);
      puVar4 = puVar4 + (long)*piVar1 * 3;
    } while (*piVar1 != 0);
LAB_0013d7a4:
    return &DAT_03cb6488;
  case 0x13:
    iVar3 = FUN_0013fed0(*param_2,&local_28,0);
    if (iVar3 == 0) goto switchD_0013d5a4_caseD_1;
    uVar5 = local_28 - 1;
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar5 < uVar2) goto LAB_0013d71c;
    if ((((uVar2 & uVar2 - 1) == 0) || (-1 < *(char *)(param_1 + 10))) ||
       ((local_28 != uVar2 + 1 &&
        (uVar2 = uVar2 | uVar2 >> 1, uVar2 = uVar2 | uVar2 >> 2, uVar2 = uVar2 | uVar2 >> 4,
        uVar2 = uVar2 | uVar2 >> 8, (uVar2 | uVar2 >> 0x10) + 1 <= uVar5)))) {
      puVar4 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (long)(int)((uint)local_28 &
                          (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18);
      do {
        if ((*(char *)((long)puVar4 + 9) == '\x03') && (puVar4[2] == local_28)) {
          return puVar4;
        }
        piVar1 = (int *)((long)puVar4 + 0xc);
        puVar4 = puVar4 + (long)*piVar1 * 3;
      } while (*piVar1 != 0);
      goto LAB_0013d7a4;
    }
  }
  *(int *)(param_1 + 0xc) = (int)local_28;
LAB_0013d71c:
  return (undefined8 *)(*(long *)(param_1 + 0x10) + uVar5 * 0x10);
}


