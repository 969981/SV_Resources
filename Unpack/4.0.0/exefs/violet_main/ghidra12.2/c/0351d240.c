/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351d240; name: FUN_0351d240
 */


void FUN_0351d240(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  double dVar14;
  double dVar15;
  int local_60 [2];
  undefined1 local_58;
  
  uVar11 = param_3 - *(long *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x18);
  lVar1 = uVar11 + param_4;
  if (lVar6 == 0) goto LAB_0351d398;
  bVar4 = *(byte *)(param_2 + 0x44);
  uVar7 = (uint)bVar4;
  iVar10 = (int)uVar11;
  if ((bVar4 & 1) == 0) {
    if ((((param_5 & 1) != 0) && ((bVar4 >> 2 & 1) == 0)) && ((*(byte *)(lVar6 + 0x5a) & 1) != 0)) {
      uVar7 = iVar10 - *(int *)(lVar6 + 0x90);
      local_58 = 0;
      dVar14 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
      dVar14 = ((double)(int)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) * 1000.0) / dVar14;
      dVar15 = 0.5;
      if (dVar14 <= 0.0) {
        dVar15 = -0.5;
      }
      local_60[0] = (int)(dVar15 + dVar14);
      local_60[1] = 4;
      FUN_0351cba8(lVar6,local_60,0xffffffff);
      uVar7 = *(byte *)(param_2 + 0x44) | 4;
LAB_0351d338:
      *(char *)(param_2 + 0x44) = (char)uVar7;
    }
  }
  else if ((iVar10 <= *(int *)(param_2 + 0x24)) && (*(int *)(param_2 + 0x24) < lVar1)) {
    if ((param_5 & 1) == 0) {
      FUN_0351ca80(lVar6,param_2 + 0x28);
      uVar7 = (uint)*(byte *)(param_2 + 0x44);
    }
    else {
      uVar7 = bVar4 | 4;
      *(char *)(param_2 + 0x44) = (char)uVar7;
    }
    uVar7 = uVar7 & 0xfe;
    goto LAB_0351d338;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    iVar3 = *(int *)(param_2 + 0x34);
    if ((iVar10 <= iVar3) && (iVar3 < lVar1)) {
      FUN_0351cba8(*(undefined8 *)(param_2 + 0x18),param_2 + 0x38,iVar3 - iVar10);
      *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfd;
    }
  }
  lVar6 = *(long *)(param_2 + 0x18);
  if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x5a) & 3) != 0)) &&
     ((*(byte *)(lVar6 + 0x5a) >> 4 & 1) == 0)) {
    FUN_03532fa8(param_1,lVar6,uVar11 & 0xffffffff,param_4);
  }
LAB_0351d398:
  puVar5 = PTR_DAT_047e2fd0;
  plVar8 = (long *)(param_2 + 0x10);
  plVar9 = (long *)*plVar8;
  if (plVar9 != (long *)0x0) {
    plVar12 = (long *)0x0;
    do {
      if (*plVar9 < lVar1) {
        if ((int)plVar9[1] == 1) {
          FUN_035187ac(plVar9[2]);
        }
        plVar13 = (long *)plVar9[3];
        plVar2 = plVar8;
        if ((long *)*plVar8 != plVar9) {
          plVar2 = plVar12 + 3;
        }
        *plVar2 = (long)plVar13;
        (**(code **)(puVar5 + 0x30))(0,plVar9);
        plVar9 = plVar13;
      }
      else {
        plVar12 = plVar9;
        plVar9 = (long *)plVar9[3];
      }
    } while (plVar9 != (long *)0x0);
  }
  return;
}


