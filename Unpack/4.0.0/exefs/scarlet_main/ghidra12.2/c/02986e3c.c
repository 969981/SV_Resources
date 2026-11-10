/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986e3c; name: FUN_02986e3c
 */


undefined8 FUN_02986e3c(long param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float __x;
  float fVar12;
  int local_68 [6];
  
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  if (param_3 != 0) {
    uVar9 = 0;
    uVar10 = (ulong)param_3;
    piVar7 = local_68;
    puVar11 = param_2;
    do {
      plVar8 = (long *)*puVar11;
      if (plVar8 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar8 + 0x208))(plVar8);
        if ((uVar3 & 1) == 0) {
          iVar5 = 0;
        }
        else {
          bVar1 = (**(code **)(*plVar8 + 0x118))(plVar8);
          __x = SQRT((float)bVar1);
          if (NAN(__x)) {
            __x = sqrtf((float)bVar1);
          }
          fVar12 = SQRT(__x);
          if (NAN(fVar12)) {
            fVar12 = sqrtf(__x);
          }
          iVar5 = (int)(fVar12 * 100.0);
        }
        uVar9 = uVar9 + 1;
        *piVar7 = iVar5;
      }
      uVar10 = uVar10 - 1;
      piVar7 = piVar7 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar10 != 0);
    if (uVar9 != 0) {
      uVar3 = (ulong)uVar9;
      uVar10 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        uVar6 = 0;
        iVar5 = 0;
      }
      else {
        uVar6 = 0;
        iVar5 = 0;
        piVar7 = local_68 + 2;
        do {
          uVar6 = uVar6 + 4;
          iVar5 = piVar7[1] + *piVar7 + piVar7[-1] + piVar7[-2] + iVar5;
          piVar7 = piVar7 + 4;
        } while ((uVar3 & 0xfffffffc) != uVar6);
      }
      if ((uVar9 & 3) != 0) {
        piVar7 = local_68 + uVar6;
        do {
          iVar5 = *piVar7 + iVar5;
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 1;
        } while (uVar10 != 0);
      }
      uVar4 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
      uVar2 = FUN_012440f0(uVar4,iVar5);
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar9 = local_68[uVar10] + uVar9;
        if (uVar2 < uVar9) goto LAB_02986f34;
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
      goto LAB_02986f30;
    }
  }
  uVar4 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
  FUN_012440f0(uVar4,0);
LAB_02986f30:
  uVar10 = 0;
LAB_02986f34:
  return *(undefined8 *)
          ((long)param_2 + (-(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (uVar10 & 0xffffffff) << 3)
          );
}


