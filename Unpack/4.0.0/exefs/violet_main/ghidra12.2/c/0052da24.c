/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052da24; name: FUN_0052da24
 */


undefined8 * FUN_0052da24(long param_1,int param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 *puVar9;
  byte unaff_w26;
  undefined8 *local_48;
  
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (puVar9 == (undefined8 *)(param_1 + 0x28)) {
    uVar6 = **(undefined8 **)(param_1 + 8);
    puVar9[1] = (*(undefined8 **)(param_1 + 8))[1];
    *puVar9 = uVar6;
    if (*(int *)(param_1 + 0x54) < 1) {
LAB_0052dcd4:
      if (*(long *)(param_1 + 0x48) == 2) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8) - (long)puVar9;
      }
      *(long *)(param_1 + 8) = param_1 + 0x38;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return puVar9;
    }
    if ((-1 < param_3) && (param_2 < 0x10)) {
      pbVar2 = (byte *)(param_1 + 0x38);
      pbVar7 = (byte *)(param_1 + param_2 + 0x28);
      do {
        uVar5 = (uint)*pbVar7;
        if ((char)*pbVar7 < '\0') {
          uVar5 = (uVar5 + (uint)pbVar7[1] * 0x80) - 0x80;
          pbVar3 = pbVar7 + 2;
          if ((char)pbVar7[1] < '\0') {
            uVar5 = (uVar5 + (uint)*pbVar3 * 0x4000) - 0x4000;
            if ((char)*pbVar3 < '\0') {
              uVar5 = (uVar5 + (uint)pbVar7[3] * 0x200000) - 0x200000;
              if ((char)pbVar7[3] < '\0') {
                if ((char)pbVar7[4] < 0) break;
                lVar8 = 4;
                uVar5 = uVar5 + (char)pbVar7[4] * 0x10000000 + 0xf0000000;
              }
              else {
                lVar8 = 3;
              }
            }
            else {
              lVar8 = 2;
            }
            pbVar3 = pbVar7 + 1 + lVar8;
          }
        }
        else {
          pbVar3 = pbVar7 + 1;
        }
        if (pbVar2 < pbVar3) break;
        if (uVar5 == 0) goto LAB_0052dcd4;
        switch(uVar5 & 7) {
        case 0:
          pbVar3 = (byte *)FUN_0052f200(pbVar3,&local_48);
          unaff_w26 = unaff_w26 & pbVar3 != (byte *)0x0;
          if (pbVar3 == (byte *)0x0) {
            if (unaff_w26 != 0) goto LAB_0052dcd4;
            goto switchD_0052db44_default;
          }
          break;
        case 1:
          pbVar3 = pbVar3 + 8;
          break;
        case 2:
          pbVar7 = pbVar3 + 1;
          uVar5 = (uint)*pbVar3;
          if ((char)*pbVar3 < '\0') {
            uVar5 = (uVar5 + (uint)*pbVar7 * 0x80) - 0x80;
            if (-1 < (char)*pbVar7) {
              lVar8 = 1;
LAB_0052db98:
              pbVar7 = pbVar7 + lVar8;
              goto LAB_0052db9c;
            }
            uVar5 = (uVar5 + (uint)pbVar3[2] * 0x4000) - 0x4000;
            if (-1 < (char)pbVar3[2]) {
              lVar8 = 2;
              goto LAB_0052db98;
            }
            uVar5 = (uVar5 + (uint)pbVar3[3] * 0x200000) - 0x200000;
            if (-1 < (char)pbVar3[3]) {
              lVar8 = 3;
              goto LAB_0052db98;
            }
            if ((7 < pbVar3[4]) ||
               (uVar5 = uVar5 + (uint)pbVar3[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar5))
            goto switchD_0052db44_default;
            pbVar7 = pbVar3 + 5;
            lVar8 = (long)(int)uVar5;
            if ((long)pbVar2 - (long)pbVar7 < lVar8) goto switchD_0052db44_default;
          }
          else {
LAB_0052db9c:
            lVar8 = (long)(int)uVar5;
            if ((long)pbVar2 - (long)pbVar7 < lVar8) goto switchD_0052db44_default;
          }
          pbVar3 = pbVar7 + lVar8;
          break;
        case 3:
          param_3 = param_3 + 1;
          break;
        case 4:
          bVar1 = param_3 < 1;
          param_3 = param_3 + -1;
          if (bVar1) goto LAB_0052dcd4;
          break;
        case 5:
          pbVar3 = pbVar3 + 4;
          break;
        default:
          goto switchD_0052db44_default;
        }
        pbVar7 = pbVar3;
      } while (pbVar3 < pbVar2);
    }
switchD_0052db44_default:
    do {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                        (*(long **)(param_1 + 0x20),&local_48,param_1 + 0x18);
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        goto LAB_0052dcd4;
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - uVar5;
      if (0x10 < (int)uVar5) {
        uVar6 = *local_48;
        *(undefined8 *)(param_1 + 0x40) = local_48[1];
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        *(long *)(param_1 + 8) = param_1 + 0x38;
        *(undefined8 **)(param_1 + 0x10) = local_48;
        uVar4 = *(ulong *)(param_1 + 0x48);
        goto joined_r0x0052dd30;
      }
    } while ((int)uVar5 < 1);
    memcpy((void *)(param_1 + 0x38),local_48,(ulong)uVar5);
    *(ulong *)(param_1 + 8) = param_1 + (ulong)uVar5 + 0x28;
    *(undefined8 **)(param_1 + 0x10) = puVar9;
    uVar4 = *(ulong *)(param_1 + 0x48);
joined_r0x0052dd30:
    if (uVar4 < 2) {
      return puVar9;
    }
    uVar6 = 1;
  }
  else {
    *(long *)(param_1 + 8) = (long)puVar9 + (long)*(int *)(param_1 + 0x18) + -0x10;
    *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x48) != 1) {
      return puVar9;
    }
    uVar6 = 2;
  }
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  return puVar9;
}


