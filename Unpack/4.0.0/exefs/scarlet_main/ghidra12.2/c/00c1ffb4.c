/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1ffb4; name: FUN_00c1ffb4
 */


void FUN_00c1ffb4(long *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
      if (*(int *)(PTR_DAT_047dad98 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
        if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
          pcVar2 = *(code **)(*(long *)*param_1 + 0x38);
        }
        else {
          pcVar2 = *(code **)(*(long *)*param_1 + 0x68);
        }
        (*pcVar2)();
      }
      else if (*(int *)(PTR_DAT_047dad98 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
        pbVar1 = (byte *)*param_1;
        if ((*pbVar1 & 1) == 0) {
          pbVar1[0] = 0;
          pbVar1[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar1 + 0x10) = 0;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
        }
      }
      *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
    }
  }
  else {
    switch(*(undefined4 *)(PTR_DAT_047dad98 + (ulong)*(byte *)(param_1 + 1) * 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      *(undefined4 *)*param_1 = 0;
      break;
    case 9:
      lVar4 = *param_1;
      uVar5 = (ulong)*(uint *)(lVar4 + 8);
      if (0 < (int)*(uint *)(lVar4 + 8)) {
        puVar3 = *(undefined8 **)(lVar4 + 0x10);
        do {
          puVar3 = puVar3 + 1;
          pbVar1 = (byte *)*puVar3;
          if ((*pbVar1 & 1) == 0) {
            pbVar1[0] = 0;
            pbVar1[1] = 0;
          }
          else {
            **(undefined1 **)(pbVar1 + 0x10) = 0;
            pbVar1[8] = 0;
            pbVar1[9] = 0;
            pbVar1[10] = 0;
            pbVar1[0xb] = 0;
            pbVar1[0xc] = 0;
            pbVar1[0xd] = 0;
            pbVar1[0xe] = 0;
            pbVar1[0xf] = 0;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(undefined4 *)(lVar4 + 8) = 0;
      }
      break;
    case 10:
      lVar4 = *param_1;
      uVar5 = (ulong)*(uint *)(lVar4 + 8);
      if (0 < (int)*(uint *)(lVar4 + 8)) {
        puVar3 = *(undefined8 **)(lVar4 + 0x10);
        do {
          puVar3 = puVar3 + 1;
          (**(code **)(*(long *)*puVar3 + 0x38))();
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(undefined4 *)(lVar4 + 8) = 0;
      }
    }
  }
  return;
}


