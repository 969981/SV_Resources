/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e55c0; name: FUN_002e55c0
 */


bool FUN_002e55c0(byte *param_1,byte *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulong uVar15;
  void *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    bVar3 = param_1 == param_2;
  }
  else {
    uVar4 = FUN_002e5930(param_1,param_2);
    if ((uVar4 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar2 = *param_1;
      if (bVar2 - 5 < 7) {
        local_68 = (undefined8 *)0x0;
        local_78 = (void *)0x0;
        local_70 = (undefined8 *)0x0;
        do {
          if (bVar2 - 7 < 5) {
            pbVar8 = param_1 + 8;
            if (1 < *(ushort *)(param_1 + 6)) {
              pbVar8 = *(byte **)pbVar8;
            }
            param_1 = *(byte **)pbVar8;
            pbVar8 = param_2 + 8;
            if (1 < *(ushort *)(param_2 + 6)) {
              pbVar8 = *(byte **)pbVar8;
            }
            param_2 = *(byte **)pbVar8;
                    /* try { // try from 002e567c to 002e5687 has its CatchHandler @ 002e58fc */
            uVar4 = FUN_002e5930(param_1,param_2);
            if ((uVar4 & 1) == 0) {
LAB_002e5898:
              bVar3 = false;
              if (local_78 == (void *)0x0) {
                return false;
              }
LAB_002e58a4:
              local_70 = local_78;
              FUN_0049e790(PTR_LAB_047cba48);
              return bVar3;
            }
          }
          else {
            if ((bVar2 - 5 < 2) &&
               (uVar4 = (ulong)*(ushort *)(param_1 + 6), *(ushort *)(param_1 + 6) != 0)) {
              uVar15 = 0;
              do {
                pbVar8 = param_1 + 8;
                if (1 < (uint)uVar4) {
                  pbVar8 = *(byte **)(param_1 + 8);
                }
                uVar14 = *(undefined8 *)(pbVar8 + uVar15 * 8);
                pbVar8 = param_2 + 8;
                if (1 < *(ushort *)(param_2 + 6)) {
                  pbVar8 = *(byte **)(param_2 + 8);
                }
                uVar12 = *(undefined8 *)(pbVar8 + uVar15 * 8);
                    /* try { // try from 002e56fc to 002e5707 has its CatchHandler @ 002e5900 */
                uVar4 = FUN_002e5930(uVar14,uVar12);
                if ((uVar4 & 1) == 0) goto LAB_002e5898;
                if (local_70 == local_68) {
                  lVar6 = (long)local_70 - (long)local_78 >> 3;
                  uVar4 = lVar6 + 1;
                  if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 002e58e4 to 002e58f3 has its CatchHandler @ 002e58f4 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar11 = (long)local_68 - (long)local_78 >> 2;
                  if (uVar4 <= uVar11) {
                    uVar4 = uVar11;
                  }
                  if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
                    uVar4 = 0x1fffffffffffffff;
                  }
                  if (uVar4 == 0) {
                    lVar5 = 0;
                  }
                  else {
                    lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar4 << 3);
                  }
                  puVar10 = (undefined8 *)(lVar5 + lVar6 * 8);
                  puVar1 = (undefined8 *)(lVar5 + uVar4 * 8);
                  *puVar10 = uVar14;
                  sVar7 = (long)local_70 - (long)local_78;
                  pvVar13 = (void *)((long)puVar10 - sVar7);
                  if (0 < (long)sVar7) {
                    memcpy(pvVar13,local_78,sVar7);
                  }
                  bVar3 = local_78 != (void *)0x0;
                  local_78 = pvVar13;
                  local_70 = puVar10 + 1;
                  local_68 = puVar1;
                  if (bVar3) {
                    FUN_0049e790(PTR_LAB_047cba48);
                  }
                }
                else {
                  *local_70 = uVar14;
                  local_70 = local_70 + 1;
                }
                if (local_70 == local_68) {
                  uVar11 = (long)local_68 - (long)local_78 >> 3;
                  uVar4 = uVar11 + 1;
                  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar9 = (long)local_68 - (long)local_78 >> 2;
                  if (uVar4 <= uVar9) {
                    uVar4 = uVar9;
                  }
                  if (0xffffffffffffffe < uVar11) {
                    uVar4 = 0x1fffffffffffffff;
                  }
                  if (uVar4 == 0) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar4 << 3);
                  }
                  puVar10 = (undefined8 *)(lVar6 + uVar11 * 8);
                  puVar1 = (undefined8 *)(lVar6 + uVar4 * 8);
                  *puVar10 = uVar12;
                  sVar7 = (long)local_70 - (long)local_78;
                  pvVar13 = (void *)((long)puVar10 - sVar7);
                  if (0 < (long)sVar7) {
                    memcpy(pvVar13,local_78,sVar7);
                  }
                  bVar3 = local_78 != (void *)0x0;
                  local_78 = pvVar13;
                  local_70 = puVar10 + 1;
                  local_68 = puVar1;
                  if (bVar3) {
                    FUN_0049e790(PTR_LAB_047cba48);
                  }
                }
                else {
                  *local_70 = uVar12;
                  local_70 = local_70 + 1;
                }
                uVar4 = (ulong)*(ushort *)(param_1 + 6);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar4);
            }
            if ((long)local_70 - (long)local_78 == 0) {
              bVar3 = true;
              if (local_78 == (void *)0x0) {
                return true;
              }
              goto LAB_002e58a4;
            }
            uVar4 = (long)local_70 - (long)local_78 >> 3;
            puVar10 = (undefined8 *)((long)local_78 + uVar4 * 8 + -0x10);
            param_1 = (byte *)*puVar10;
            param_2 = *(byte **)((long)local_78 + uVar4 * 8 + -8);
            if (uVar4 < 2) {
                    /* try { // try from 002e5880 to 002e588b has its CatchHandler @ 002e58f8 */
              FUN_002e733c(&local_78,0xfffffffffffffffe);
            }
            else {
              local_70 = puVar10;
            }
          }
          bVar2 = *param_1;
        } while( true );
      }
      bVar3 = true;
    }
  }
  return bVar3;
}


