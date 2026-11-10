/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351d6f4; name: FUN_0351d6f4
 */


void FUN_0351d6f4(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  int local_50 [2];
  undefined1 local_48;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0x5a) & 1) == 0)) ||
     ((*(byte *)(param_1 + 0x44) >> 2 & 1) != 0)) {
    plVar7 = (long *)(param_1 + 0x10);
    lVar6 = *plVar7;
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
    puVar4 = PTR_DAT_047e2fd0;
    if (lVar6 != 0) {
      do {
        if (*(int *)(lVar6 + 8) == 1) {
          FUN_035187ac(*(undefined8 *)(lVar6 + 0x10));
        }
        lVar5 = *(long *)(lVar6 + 0x18);
        plVar1 = plVar7;
        if (*plVar7 != lVar6) {
          plVar1 = (long *)&DAT_00000018;
        }
        *plVar1 = lVar5;
        (**(code **)(puVar4 + 0x30))(0,lVar6);
        lVar6 = lVar5;
      } while (lVar5 != 0);
      lVar5 = *(long *)(param_1 + 0x18);
    }
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x80) = 0;
      plVar7 = *(long **)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      if ((plVar7 != (long *)0x0) &&
         (iVar3 = (int)plVar7[9] + -1, *(int *)(plVar7 + 9) = iVar3, iVar3 == 0)) {
        if (plVar7[2] == 0) {
          FUN_03518540(plVar7);
        }
        else {
          FUN_0351c44c(plVar7[2],plVar7);
          plVar7[2] = 0;
        }
        (**(code **)(*plVar7 + 0x50))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x0351d8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar7);
        return;
      }
    }
  }
  else {
    uVar2 = (param_2 - *(int *)(param_1 + 8)) - *(int *)(lVar5 + 0x90);
    local_48 = 0;
    dVar8 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    dVar8 = ((double)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 1000.0) / dVar8;
    dVar9 = 0.5;
    if (dVar8 <= 0.0) {
      dVar9 = -0.5;
    }
    local_50[0] = (int)(dVar9 + dVar8);
    local_50[1] = 4;
    FUN_0351cba8(lVar5,local_50,0xffffffff);
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 4;
  }
  return;
}


