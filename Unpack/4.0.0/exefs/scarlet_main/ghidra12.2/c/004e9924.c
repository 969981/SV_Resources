/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e9924; name: FUN_004e9924
 */


undefined8 FUN_004e9924(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  size_t __n;
  byte *__src;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *__dest;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  bVar2 = (byte)*param_2;
  uVar6 = param_2[1];
  __src = (byte *)param_2[2];
  if ((bVar2 & 1) == 0) {
    uVar8 = (ulong)(bVar2 >> 1);
    if (bVar2 >> 1 != 0) {
      puVar9 = param_2;
      do {
        puVar9 = (ulong *)((long)puVar9 + 1);
        bVar3 = *(byte *)puVar9;
        if (((bVar3 != 0x2e) && (bVar3 != 0x5f)) &&
           ((bVar3 < 0x30 ||
            ((0x39 < bVar3 && ((bVar3 < 0x41 || ((0x5a < bVar3 && (0x19 < (byte)(bVar3 + 0x9f)))))))
            )))) goto LAB_004e9b98;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else if (uVar6 != 0) {
    uVar8 = uVar6;
    pbVar10 = __src;
    do {
      bVar3 = *pbVar10;
      if (((bVar3 != 0x2e) && (bVar3 != 0x5f)) &&
         ((bVar3 < 0x30 ||
          ((0x39 < bVar3 && ((bVar3 < 0x41 || ((0x5a < bVar3 && (0x19 < (byte)(bVar3 + 0x9f)))))))))
         )) goto LAB_004e9b98;
      pbVar10 = pbVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  plVar14 = (long *)(param_1 + 0x20);
  plVar16 = (long *)*plVar14;
  if (plVar16 == (long *)0x0) {
    plVar15 = plVar14;
  }
  else {
    uVar8 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) == 0) {
      pbVar10 = (byte *)((long)param_2 + 1);
    }
    else {
      pbVar10 = __src;
      uVar8 = uVar6;
    }
    plVar13 = plVar14;
    do {
      bVar3 = *(byte *)(plVar16 + 4);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = plVar16[5];
      }
      __n = uVar1;
      if (uVar8 <= uVar1) {
        __n = uVar8;
      }
      if (__n == 0) {
LAB_004e9a44:
        uVar5 = (uint)(uVar1 < uVar8);
        if (uVar8 < uVar1) {
          uVar5 = 0xffffffff;
        }
      }
      else {
        pvVar12 = (void *)plVar16[6];
        if ((bVar3 & 1) == 0) {
          pvVar12 = (void *)((long)plVar16 + 0x21);
        }
        uVar5 = memcmp(pbVar10,pvVar12,__n);
        if (uVar5 == 0) goto LAB_004e9a44;
      }
      plVar15 = plVar16;
      if (-1 < (int)uVar5) {
        plVar15 = plVar13;
      }
      plVar16 = (long *)plVar16[-1 < (int)uVar5];
      plVar13 = plVar15;
    } while (plVar16 != (long *)0x0);
  }
  if (plVar15 != *(long **)(param_1 + 0x18)) {
    plVar16 = (long *)*plVar15;
    plVar13 = plVar15;
    if ((long *)*plVar15 == (long *)0x0) {
      do {
        plVar15 = (long *)plVar13[2];
        bVar4 = (long *)*plVar15 == plVar13;
        plVar13 = plVar15;
      } while (bVar4);
    }
    else {
      do {
        plVar15 = plVar16;
        plVar16 = (long *)plVar15[1];
      } while ((long *)plVar15[1] != (long *)0x0);
    }
  }
  local_78 = param_3;
  uStack_70 = param_4;
  if (plVar15 == plVar14) {
    if ((bVar2 & 1) == 0) {
      uStack_88 = param_2[1];
      local_90 = *param_2;
      local_80 = (void *)param_2[2];
    }
    else {
      if (uVar6 < 0x17) {
        pvVar12 = (void *)((ulong)&local_90 | 1);
        local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar6 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar6) {
LAB_004e9cc0:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
        pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
        local_90 = uVar8 | 1;
        uStack_88 = uVar6;
        local_80 = pvVar12;
      }
      memcpy(pvVar12,__src,uVar6 + 1);
    }
                    /* try { // try from 004e9c1c to 004e9c2b has its CatchHandler @ 004e9ccc */
    FUN_004ea380(param_1 + 0x18,&local_90,&local_90);
LAB_004e9c84:
    if ((local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    uVar7 = 1;
  }
  else {
    uVar6 = FUN_004ea20c(param_1,plVar15 + 4,param_2);
    if ((uVar6 & 1) == 0) {
      plVar16 = (long *)plVar15[1];
      if ((long *)plVar15[1] == (long *)0x0) {
        plVar16 = plVar15 + 2;
        plVar13 = (long *)*plVar16;
        if ((long *)*plVar13 != plVar15) {
          do {
            lVar11 = *plVar16;
            plVar16 = (long *)(lVar11 + 0x10);
            plVar13 = (long *)*plVar16;
          } while (*plVar13 != lVar11);
        }
      }
      else {
        do {
          plVar13 = plVar16;
          plVar16 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      if ((plVar13 == plVar14) ||
         (uVar6 = FUN_004ea20c(param_1,param_2,plVar13 + 4), (uVar6 & 1) == 0)) {
        if ((*param_2 & 1) == 0) {
          uStack_88 = param_2[1];
          local_90 = *param_2;
          local_80 = (void *)param_2[2];
        }
        else {
          uVar6 = param_2[1];
          pvVar12 = (void *)param_2[2];
          if (uVar6 < 0x17) {
            __dest = (void *)((ulong)&local_90 | 1);
            local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar6 << 1));
          }
          else {
            if (0xffffffffffffffef < uVar6) goto LAB_004e9cc0;
            uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
            local_90 = uVar8 | 1;
            uStack_88 = uVar6;
            local_80 = __dest;
          }
          memcpy(__dest,pvVar12,uVar6 + 1);
        }
                    /* try { // try from 004e9c70 to 004e9c83 has its CatchHandler @ 004e9cc8 */
        FUN_004ea4d0(param_1 + 0x18,plVar13,&local_90,&local_90);
        goto LAB_004e9c84;
      }
    }
LAB_004e9b98:
    uVar7 = 0;
  }
  return uVar7;
}


