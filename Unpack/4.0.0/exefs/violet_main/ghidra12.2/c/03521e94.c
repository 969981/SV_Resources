/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03521e94; name: FUN_03521e94
 */


void FUN_03521e94(float param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  ulong uVar10;
  float fVar11;
  undefined4 local_68;
  undefined2 local_64;
  
  fVar11 = *(float *)(param_2 + 0x68) + param_1 * *(float *)(param_2 + 0x58);
  iVar5 = *(int *)(param_2 + 100);
  *(float *)(param_2 + 0x68) = fVar11 - (float)(int)fVar11;
  *(int *)(param_2 + 100) = iVar5 + (int)fVar11;
  do {
    if ((*(long *)(param_2 + 0x38) == 0) && ((*(byte *)(param_2 + 0x6c) >> 2 & 1) == 0)) {
      return;
    }
    if (*(uint *)(param_2 + 100) <= *(uint *)(param_2 + 0x60)) {
      return;
    }
    if ((((*(long *)(param_2 + 0x38) != 0) && ((*(byte *)(param_2 + 0x6c) >> 1 & 1) != 0)) &&
        (bVar6 = *(byte *)(param_2 + 0x44), (char)bVar6 < '\0')) && ((bVar6 & 0xf0) != 0xf0)) {
      bVar7 = *(byte *)(param_2 + 0x45);
      bVar1 = bVar6;
      if (bVar6 < 0xf0) {
        bVar1 = bVar6 & 0xf0;
      }
      bVar8 = *(byte *)(param_2 + 0x46);
      pbVar9 = (byte *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
      if (pbVar9 != (byte *)0x0) {
        bVar2 = 0x80;
        if (bVar1 != 0x90 || bVar8 != 0) {
          bVar2 = bVar1;
        }
        bVar3 = 0;
        if (bVar1 != 0x90 || bVar8 != 0) {
          bVar3 = bVar8;
        }
        pbVar9[1] = bVar6 & 0xf;
        *pbVar9 = bVar2;
        pbVar9[4] = bVar7;
        pbVar9[5] = bVar3;
        *(undefined2 *)(pbVar9 + 10) = local_64;
        *(undefined4 *)(pbVar9 + 6) = local_68;
        pbVar9[0xc] = 0;
        pbVar9[0xd] = 0;
        pbVar9[0xe] = 0;
        pbVar9[0xf] = 0;
        pbVar9[0x10] = 0;
        pbVar9[0x11] = 0;
        pbVar9[0x12] = 0;
        pbVar9[0x13] = 0;
        pbVar9[0x18] = 0;
        pbVar9[0x19] = 0;
        pbVar9[0x1a] = 0;
        pbVar9[0x1b] = 0;
        pbVar9[0x1c] = 0;
        pbVar9[0x1d] = 0;
        pbVar9[0x1e] = 0;
        pbVar9[0x1f] = 0;
        *(float *)(pbVar9 + 0xc) =
             *(float *)(param_2 + 0x54) * (float)(uint)(*(int *)(param_2 + 0x60) - iVar5);
        *(undefined4 *)(pbVar9 + 0x10) = *(undefined4 *)(param_2 + 0x5c);
        pbVar9[0x18] = 0;
        pbVar9[0x19] = 0;
        pbVar9[0x1a] = 0;
        pbVar9[0x1b] = 0;
        pbVar9[0x1c] = 0;
        pbVar9[0x1d] = 0;
        pbVar9[0x1e] = 0;
        pbVar9[0x1f] = 0;
        plVar4 = param_3 + 1;
        if (param_3[1] != 0) {
          plVar4 = (long *)(*param_3 + 0x18);
        }
        *plVar4 = (long)pbVar9;
        *param_3 = (long)pbVar9;
      }
    }
    uVar10 = FUN_03521af8(param_2);
  } while ((uVar10 & 1) != 0);
  return;
}


