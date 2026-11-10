/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026eb84; name: FUN_0026eb84
 */


undefined8 FUN_0026eb84(int *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  size_t __n;
  byte *__s1;
  byte *pbVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 uStack_88;
  long *local_80;
  long lStack_78;
  ulong local_70;
  long *local_60;
  long lStack_58;
  ulong local_50;
  
  FUN_0026dfe8();
  puVar4 = PTR_LAB_047cba48;
  if (*param_1 == 2) {
    if ((char)param_1[1] != '\0') {
      lStack_58 = *(long *)(param_3 + 0x20);
      local_50 = *(ulong *)(lStack_58 + 0x18);
      uVar7 = *(ulong *)(lStack_58 + 8);
      if (local_50 < uVar7) {
        do {
          local_60 = *(long **)(*(long *)(lStack_58 + 0x20) + local_50 * 8);
          if (local_60 != (long *)0x0) {
            if (local_60 == *(long **)(*(long *)(lStack_58 + 0x20) + (local_50 ^ 1) * 8)) {
              local_60 = *(long **)(*local_60 + 0x20);
            }
            goto joined_r0x0026ecb0;
          }
          local_50 = local_50 + 1;
        } while (uVar7 != local_50);
        local_60 = (long *)0x0;
        local_50 = uVar7;
      }
      else {
        local_60 = (long *)0x0;
      }
joined_r0x0026ecb0:
      if (local_60 == (long *)0x0) {
        return 1;
      }
      do {
        FUN_0026e39c(param_1);
        pbVar6 = (byte *)local_60[1];
        pbVar9 = *(byte **)(param_1 + 2);
        pbVar3 = *(byte **)(param_1 + 4);
        if ((*pbVar6 & 1) == 0) {
          pbVar6 = pbVar6 + 1;
        }
        else {
          pbVar6 = *(byte **)(pbVar6 + 0x10);
        }
        if (pbVar9 != pbVar3) {
          __n = strlen((char *)pbVar6);
          if (__n == 0xffffffffffffffff) {
            do {
              if (((*pbVar9 & 1) != 0) && (*(long *)(pbVar9 + 8) == -1)) {
                    /* try { // try from 0026ee84 to 0026ee8b has its CatchHandler @ 0026ee8c */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_out_of_range();
              }
              pbVar9 = pbVar9 + 0x20;
            } while (pbVar3 != pbVar9);
          }
          else if (__n == 0) {
            do {
              if ((*pbVar9 & 1) == 0) {
                if (*pbVar9 < 2) goto LAB_0026edbc;
              }
              else if (*(long *)(pbVar9 + 8) == 0) goto LAB_0026edbc;
              pbVar9 = pbVar9 + 0x20;
            } while (pbVar3 != pbVar9);
          }
          else {
            do {
              if ((*pbVar9 & 1) == 0) {
                if (__n == *pbVar9 >> 1) {
                  __s1 = pbVar9 + 1;
LAB_0026ed48:
                  iVar5 = memcmp(__s1,pbVar6,__n);
                  if (iVar5 == 0) goto LAB_0026edbc;
                }
              }
              else if (__n == *(size_t *)(pbVar9 + 8)) {
                __s1 = *(byte **)(pbVar9 + 0x10);
                goto LAB_0026ed48;
              }
              pbVar9 = pbVar9 + 0x20;
            } while (pbVar3 != pbVar9);
          }
          pbVar9 = pbVar3;
        }
LAB_0026edbc:
        if (pbVar3 == pbVar9) goto code_r0x0026edc4;
                    /* try { // try from 0026ecc0 to 0026ecc7 has its CatchHandler @ 0026ee94 */
        FUN_002597f8(&local_60);
        if (local_60 == (long *)0x0) {
          return 1;
        }
      } while( true );
    }
    FUN_0026e39c(param_1);
    if (*(long *)(param_1 + 10) != *(long *)(param_1 + 0xc)) {
      lStack_98 = 0;
      local_90 = FUN_01cf7e20();
      uStack_88 = 0;
      local_a0 = &lStack_98;
      FUN_0026e39c(param_1);
      lVar1 = *(long *)(param_1 + 10);
      lVar2 = *(long *)(param_1 + 0xc);
      do {
        if (lVar1 == lVar2) {
          FUN_0026eea0(param_3,&local_a0);
          uVar8 = 1;
LAB_0026ee74:
          FUN_0026f618(&local_a0,lStack_98);
          return uVar8;
        }
        uVar7 = FUN_0026f160(&local_a0,lVar1);
        if ((uVar7 & 1) == 0) {
          uVar8 = 0;
          goto LAB_0026ee74;
        }
        lVar1 = lVar1 + 0x20;
      } while( true );
    }
                    /* try { // try from 0026ee4c to 0026ee4f has its CatchHandler @ 0026ee90 */
    FUN_0026ba58(param_3 + 0x10);
  }
  return 1;
code_r0x0026edc4:
  local_70 = local_50;
  lStack_78 = lStack_58;
  local_80 = local_60;
  pbVar6 = (byte *)local_60[1];
  local_90 = local_50;
  lStack_98 = lStack_58;
  local_a0 = local_60;
                    /* try { // try from 0026ede4 to 0026edf7 has its CatchHandler @ 0026ee98 */
  FUN_002597f8(&local_80);
  FUN_0025a790(*(undefined8 *)(param_3 + 0x20),&local_a0);
  if ((pbVar6 != (byte *)0x0) && (*(long *)(param_3 + 0x10) == 0)) {
    FUN_00267ec4(pbVar6 + 0x18);
    if ((*pbVar6 & 1) != 0) {
      FUN_0049e790(puVar4,*(undefined8 *)(pbVar6 + 0x10));
    }
    FUN_0049e790(puVar4,pbVar6);
  }
  lStack_58 = lStack_78;
  local_50 = local_70;
  local_60 = local_80;
  goto joined_r0x0026ecb0;
}


