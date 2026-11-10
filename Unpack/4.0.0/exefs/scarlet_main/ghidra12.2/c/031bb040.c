/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bb040; name: FUN_031bb040
 */


void FUN_031bb040(uint *param_1)

{
  long lVar1;
  void *__src;
  void *__src_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *local_1078;
  undefined8 local_1070;
  undefined1 auStack_1068 [4104];
  
  local_1078 = auStack_1068;
  local_1070 = 0x8000100000000000;
  uVar7 = param_1[2];
  if (uVar7 != 0) {
    uVar6 = param_1[1];
    uVar10 = 0;
    uVar9 = uVar6;
    do {
      if (uVar9 != 0) {
        uVar9 = *param_1;
        uVar7 = 0;
        do {
          if (uVar9 != 0) {
            uVar6 = 0;
            do {
              uVar9 = param_1[3] >> (ulong)(uVar6 & 0x1f);
              if (uVar9 < 2) {
                uVar9 = 1;
              }
              uVar3 = 0;
              if ((byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38] != 0) {
                uVar3 = (uVar9 - 1) / (uint)(byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38];
              }
              uVar9 = (uVar3 + 1) * (uint)(ushort)(&DAT_0487f130)[(ulong)param_1[6] * 0x1c];
              uVar3 = uVar9 >> 3;
              uVar5 = (ulong)uVar3;
              if ((local_1070._4_4_ & 0x7fffffff) < uVar9 >> 3) {
                FUN_00cb58c0(&local_1078,PTR_PTR_047d1a50,uVar5);
              }
              if ((uint)local_1070 != uVar3) {
                local_1070 = CONCAT44(local_1070._4_4_,uVar3);
              }
              uVar9 = param_1[4] >> (ulong)(uVar6 & 0x1f);
              if (uVar9 < 2) {
                uVar9 = 1;
              }
              uVar3 = uVar9 >> 1;
              if (uVar3 != 0) {
                uVar8 = 0;
                do {
                  uVar9 = uVar9 - 1;
                  uVar2 = param_1[3] >> (ulong)(uVar6 & 0x1f);
                  if (uVar2 < 2) {
                    uVar2 = 1;
                  }
                  uVar4 = 0;
                  if ((byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38] != 0) {
                    uVar4 = (uVar2 - 1) / (uint)(byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38];
                  }
                  uVar2 = uVar6 + (uVar7 + param_1[1] * uVar10) * *param_1;
                  lVar1 = *(long *)(param_1 + 0x4c) +
                          *(long *)(*(long *)(param_1 + 8) +
                                   (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4
                                   ));
                  uVar2 = (uVar4 + 1) * (uint)(ushort)(&DAT_0487f130)[(ulong)param_1[6] * 0x1c] >> 3
                  ;
                  __src = (void *)((ulong)(uVar2 * uVar8) + lVar1);
                  __src_00 = (void *)((ulong)(uVar2 * uVar9) + lVar1);
                  memcpy(local_1078,__src,uVar5);
                  memcpy(__src,__src_00,uVar5);
                  memcpy(__src_00,local_1078,uVar5);
                  uVar8 = uVar8 + 1;
                } while (uVar3 != uVar8);
              }
              uVar9 = *param_1;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
            uVar6 = param_1[1];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
        uVar7 = param_1[2];
        uVar9 = uVar6;
      }
      uVar5 = local_1070;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
    local_1070 = local_1070 & 0xffffffff00000000;
    if ((-1 < (long)uVar5) && (local_1078 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
    }
  }
  return;
}


