/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c19ac; name: FUN_011c19ac
 */


void FUN_011c19ac(undefined4 *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  char local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  char local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar13 = *(ulong *)(param_3 + 0x38);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  *(ulong *)(param_1 + 6) = uVar13 & 0xffffffff;
  *(undefined8 *)(param_1 + 4) = uVar10;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 6);
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x12);
  uVar15 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_1 + 0x14) = uVar15;
  iVar1 = *(int *)(param_4 + 0x3c);
  param_1[0x18] = iVar1;
  param_1[0x19] = *(undefined4 *)(param_4 + 0x48);
  iVar2 = *(int *)(param_4 + 0x40);
  param_1[0x1a] = iVar2;
  iVar3 = *(int *)(param_4 + 0x44);
  param_1[0x1b] = iVar3;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  uVar16 = *(ulong *)(param_3 + 0x28);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(ulong *)(param_1 + 0x2a) = uVar16 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  *(bool *)((long)param_1 + 0x7b) = iVar2 == 1;
  *(undefined2 *)(param_1 + 0x1e) = 0xf;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  *(bool *)(param_1 + 0x1f) = iVar3 == 1;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_1 + 0x12);
  if (iVar1 == 0) {
    fVar9 = (float)uVar7 - (float)uVar10;
    fVar11 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
    fVar12 = (float)uVar8 - (float)uVar13;
    fVar14 = (float)param_1[0x1c];
    fVar9 = fVar9 * fVar9 + fVar12 * fVar12;
    bVar4 = false;
    bVar5 = true;
    if (fVar11 * fVar11 <= fVar14) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar9) && !NAN(fVar14)) {
        bVar4 = fVar9 == fVar14;
        bVar5 = fVar14 <= fVar9;
      }
    }
    if ((bVar5 && !bVar4) && (FUN_011c1b68(local_50,uVar7,0x41a00000,param_2), local_50[0] != '\0'))
    {
      *(undefined8 *)(param_1 + 0xc) = local_40;
      *(undefined8 *)(param_1 + 0xe) = local_38;
      *(undefined1 *)((long)param_1 + 0x7a) = 1;
      FUN_011c1b68(local_70,*(undefined8 *)(param_1 + 4),0x41a00000,param_2);
      if (local_70[0] == '\0') {
        uVar6 = 3;
        *(undefined1 *)((long)param_1 + 0x7a) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 8) = local_60;
        *(undefined8 *)(param_1 + 10) = local_58;
        fVar9 = (float)*(undefined8 *)(param_1 + 8) - (float)*(undefined8 *)(param_1 + 4);
        fVar11 = (float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)(param_1 + 6);
        if ((float)param_1[0x1c] < fVar9 * fVar9 + fVar11 * fVar11) {
          uVar6 = 1;
          *(undefined1 *)((long)param_1 + 0x79) = 1;
        }
        else {
          uVar6 = 2;
        }
      }
      goto LAB_011c1b28;
    }
  }
  *(undefined1 *)((long)param_1 + 0x7a) = 1;
  uVar6 = 3;
LAB_011c1b28:
  *param_1 = uVar6;
  return;
}


