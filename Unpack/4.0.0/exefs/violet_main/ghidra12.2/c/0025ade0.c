/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025ade0; name: FUN_0025ade0
 */


void FUN_0025ade0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  size_t sVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  ulong *puVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte *pbVar14;
  char *pcVar15;
  undefined8 *puVar16;
  void *pvVar17;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long *plStack_138;
  byte *local_130;
  size_t sStack_128;
  void *local_120;
  long *local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [16];
  byte *local_f0;
  undefined4 local_e8;
  int local_e0;
  byte local_d0;
  undefined7 uStack_cf;
  char *local_c0;
  long *plStack_b8;
  ulong local_b0;
  size_t sStack_a8;
  void *local_a0;
  long *local_98;
  undefined8 local_90;
  size_t sStack_88;
  void *local_80;
  long *local_78;
  undefined8 local_68;
  
  pbVar14 = *(byte **)(param_2 + 0x28);
  if ((*pbVar14 & 1) == 0) {
    pbVar14 = pbVar14 + 1;
  }
  else {
    pbVar14 = *(byte **)(pbVar14 + 0x10);
  }
  plVar4 = (long *)FUN_01cf7e20();
  local_78 = plVar4;
  sVar5 = strlen((char *)pbVar14);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0025b638 to 0025b63f has its CatchHandler @ 0025b640 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_90 = (byte *)CONCAT71(local_90._1_7_,(char)((int)sVar5 << 1));
    pvVar17 = (void *)((ulong)&local_90 | 1);
    if (sVar5 == 0) goto LAB_0025aea0;
  }
  else {
    uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar17 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar6,1);
    local_90 = (byte *)(uVar6 | 1);
    sStack_88 = sVar5;
    local_80 = pvVar17;
  }
  memcpy(pvVar17,pbVar14,sVar5);
LAB_0025aea0:
  *(undefined1 *)((long)pvVar17 + sVar5) = 0;
  plVar4 = (long *)0x0;
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar4 = (long *)(*(long *)(param_2 + 0x20) + 8);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    plVar2 = plVar4 + *(int *)(param_2 + 0x18);
    pvVar17 = (void *)((ulong)&local_b0 | 1);
    do {
      lVar1 = *plVar4 + 0x28;
                    /* try { // try from 0025af18 to 0025af27 has its CatchHandler @ 0025b7ac */
      uVar6 = FUN_0051fe6c(lVar1,"nn.npln.errdetails.NError",0x19);
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 0025af64 to 0025af77 has its CatchHandler @ 0025b7ac */
        uVar6 = FUN_0051fe6c(lVar1,"nn.npln.common.MapValue",0x17);
        if ((uVar6 & 1) != 0) {
                    /* try { // try from 0025af7c to 0025af87 has its CatchHandler @ 0025b72c */
          FUN_00269fa4(auStack_100,0);
                    /* try { // try from 0025af88 to 0025af9f has its CatchHandler @ 0025b724 */
          uVar6 = FUN_0051fe2c(lVar1,"nn.npln.common.MapValue",0x17,auStack_100);
          if ((uVar6 & 1) != 0) {
            FUN_002587ac(auStack_108,auStack_100);
            FUN_00258640(&local_b0,auStack_108);
            FUN_002586f8(&local_d0,auStack_108);
            while (uVar6 = FUN_0025862c(&local_b0,&local_d0), (uVar6 & 1) != 0) {
                    /* try { // try from 0025afe4 to 0025afef has its CatchHandler @ 0025b7b4 */
              FUN_00258540(&local_130,&local_b0);
              FUN_002638ec(&local_150,auStack_110);
                    /* try { // try from 0025affc to 0025b00b has its CatchHandler @ 0025b7b8 */
              plVar10 = (long *)FUN_01d0232c(param_3,&local_68,&local_130);
              if (*plVar10 == 0) {
                puVar12 = (undefined8 *)
                          (**(code **)(*(long *)param_3[2] + 0x10))((long *)param_3[2],0x60,8);
                plVar7 = (long *)FUN_01cf7e20();
                pvVar11 = local_120;
                sVar5 = sStack_128;
                puVar12[7] = plVar7;
                if (((ulong)local_130 & 1) == 0) {
                  puVar12[6] = local_120;
                  puVar12[5] = sStack_128;
                  puVar12[4] = local_130;
                }
                else {
                  if (sStack_128 < 0x17) {
                    pvVar8 = (void *)((long)puVar12 + 0x21);
                    *(char *)(puVar12 + 4) = (char)((int)sStack_128 << 1);
                  }
                  else {
                    if (0xffffffffffffffef < sStack_128) {
                    /* try { // try from 0025b620 to 0025b627 has its CatchHandler @ 0025b650 */
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    uVar6 = sStack_128 + 0x10 & 0xfffffffffffffff0;
                    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar6,1);
                    puVar12[5] = sVar5;
                    puVar12[6] = pvVar8;
                    puVar12[4] = uVar6 | 1;
                  }
                  memcpy(pvVar8,pvVar11,sVar5 + 1);
                }
                puVar12[9] = uStack_148;
                puVar12[8] = local_150;
                puVar12[0xb] = plStack_138;
                puVar12[10] = local_140;
                uStack_148 = 0;
                local_140 = 0;
                local_150 = 0;
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = local_68;
                *plVar10 = (long)puVar12;
                if (*(long *)*param_3 != 0) {
                  *param_3 = *(long *)*param_3;
                  puVar12 = (undefined8 *)*plVar10;
                }
                FUN_010108e0(param_3[1],puVar12);
                param_3[3] = param_3[3] + 1;
              }
              if ((local_150 & 1) != 0) {
                (**(code **)(*plStack_138 + 0x18))
                          (plStack_138,local_140,local_150 & 0xfffffffffffffffe,1);
              }
              FUN_01f6fb44(auStack_110);
              if (((ulong)local_130 & 1) != 0) {
                (**(code **)(*local_118 + 0x18))
                          (local_118,local_120,(ulong)local_130 & 0xfffffffffffffffe,1);
              }
                    /* try { // try from 0025afcc to 0025afdf has its CatchHandler @ 0025b810 */
              FUN_00258614(&local_b0);
            }
            FUN_0025853c(&local_d0);
            FUN_0025853c(&local_b0);
            FUN_01cfa410(auStack_108);
          }
          FUN_0026a1cc(auStack_100);
        }
      }
      else {
                    /* try { // try from 0025af2c to 0025af37 has its CatchHandler @ 0025b798 */
        FUN_0026504c(auStack_100,0);
                    /* try { // try from 0025af38 to 0025af4b has its CatchHandler @ 0025b79c */
        uVar6 = FUN_0051fe2c(lVar1,"nn.npln.errdetails.NError",0x19,auStack_100);
        if ((uVar6 & 1) != 0) {
          if ((*local_f0 & 1) == 0) {
            local_130 = local_f0 + 1;
          }
          else {
            local_130 = *(byte **)(local_f0 + 0x10);
          }
                    /* try { // try from 0025b168 to 0025b17b has its CatchHandler @ 0025b794 */
          FUN_0025b860(param_3,PTR_PTR_047cc178,&local_130);
          sVar5 = (ulong)local_90 >> 1 & 0x7f;
          pvVar11 = (void *)((ulong)&local_90 | 1);
          if (((ulong)local_90 & 1) != 0) {
            sVar5 = sStack_88;
            pvVar11 = local_80;
          }
          local_a0 = (void *)0x0;
          local_98 = local_78;
          local_b0 = 0;
          sStack_a8 = 0;
          if (0xffffffffffffffef < sVar5 + 10) {
                    /* try { // try from 0025b628 to 0025b62f has its CatchHandler @ 0025b64c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar5 + 10 < 0x17) {
            local_b0 = (ulong)(byte)((int)sVar5 << 1);
            pvVar8 = pvVar17;
            if (sVar5 != 0) goto LAB_0025b1f8;
          }
          else {
            uVar6 = sVar5 + 0x1a & 0xfffffffffffffff0;
            pvVar8 = (void *)(**(code **)(*local_78 + 0x10))(local_78,uVar6,1);
            local_b0 = uVar6 | 1;
            sStack_a8 = sVar5;
            local_a0 = pvVar8;
LAB_0025b1f8:
            memcpy(pvVar8,pvVar11,sVar5);
          }
          *(undefined1 *)((long)pvVar8 + sVar5) = 0;
                    /* try { // try from 0025b20c to 0025b21f has its CatchHandler @ 0025b768 */
          FUN_0020f8d0(&local_b0," TraceId: ",10);
          if ((*local_f0 & 1) == 0) {
            pbVar14 = local_f0 + 1;
          }
          else {
            pbVar14 = *(byte **)(local_f0 + 0x10);
          }
                    /* try { // try from 0025b244 to 0025b24b has its CatchHandler @ 0025b764 */
          (**(code **)PTR_PTR_047cc260)(&local_d0,pbVar14);
          pcVar15 = (char *)((ulong)&local_d0 | 1);
          if ((local_d0 & 1) != 0) {
            pcVar15 = local_c0;
          }
          sVar5 = strlen(pcVar15);
                    /* try { // try from 0025b26c to 0025b277 has its CatchHandler @ 0025b730 */
          puVar9 = (ulong *)FUN_0020f8d0(&local_b0,pcVar15,sVar5);
          sStack_128 = puVar9[1];
          local_130 = (byte *)*puVar9;
          local_118 = (long *)puVar9[3];
          local_120 = (void *)puVar9[2];
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          if ((local_78 == local_118) ||
             (uVar6 = (**(code **)(*local_78 + 0x20))(), (uVar6 & 1) != 0)) {
            if (((ulong)local_90 & 1) != 0) {
              (**(code **)(*local_78 + 0x18))
                        (local_78,local_80,(ulong)local_90 & 0xfffffffffffffffe,1);
            }
            local_90 = local_130;
            local_130 = (byte *)((ulong)local_130 & 0xffffffffffff0000);
            local_80 = local_120;
            sStack_88 = sStack_128;
          }
          else {
                    /* try { // try from 0025b3e4 to 0025b3ef has its CatchHandler @ 0025b69c */
            FUN_01d0e1a8(&local_90,&local_130);
            if (((ulong)local_130 & 1) != 0) {
              (**(code **)(*local_118 + 0x18))
                        (local_118,local_120,(ulong)local_130 & 0xfffffffffffffffe,1);
            }
          }
          if ((local_d0 & 1) != 0) {
            (**(code **)(*plStack_b8 + 0x18))
                      (plStack_b8,local_c0,CONCAT71(uStack_cf,local_d0) & 0xfffffffffffffffe,1);
          }
          if ((local_b0 & 1) != 0) {
            (**(code **)(*local_98 + 0x18))(local_98,local_a0,local_b0 & 0xfffffffffffffffe,1);
          }
          if (local_e0 != 0) {
            switch(local_e0) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              uVar3 = local_e8;
              break;
            default:
              uVar3 = 0;
            }
            FUN_0024f3a0(&local_130,uVar3);
            pcVar15 = *(char **)PTR_PTR_047cc170;
            plVar10 = (long *)FUN_01cf7e20();
            local_98 = plVar10;
            sVar5 = strlen(pcVar15);
            if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0025b630 to 0025b637 has its CatchHandler @ 0025b644 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar5 < 0x17) {
              local_b0 = CONCAT71(local_b0._1_7_,(char)((int)sVar5 << 1));
              pvVar11 = pvVar17;
              if (sVar5 != 0) goto LAB_0025b448;
            }
            else {
              uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
              pvVar11 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar6,1);
              local_b0 = uVar6 | 1;
              sStack_a8 = sVar5;
              local_a0 = pvVar11;
LAB_0025b448:
              memcpy(pvVar11,pcVar15,sVar5);
            }
            *(undefined1 *)((long)pvVar11 + sVar5) = 0;
                    /* try { // try from 0025b45c to 0025b46b has its CatchHandler @ 0025b6e4 */
            puVar12 = (undefined8 *)FUN_01d0232c(param_3,&local_d0,&local_b0);
            puVar16 = (undefined8 *)*puVar12;
            if (puVar16 == (undefined8 *)0x0) {
              puVar16 = (undefined8 *)
                        (**(code **)(*(long *)param_3[2] + 0x10))((long *)param_3[2],0x60,8);
              puVar16[5] = sStack_a8;
              puVar16[4] = local_b0;
              puVar16[7] = local_98;
              puVar16[6] = local_a0;
              local_b0 = 0;
              sStack_a8 = 0;
              local_a0 = (void *)0x0;
              uVar13 = FUN_01cf7e20();
              puVar16[10] = 0;
              puVar16[0xb] = uVar13;
              puVar16[8] = 0;
              puVar16[9] = 0;
              puVar16[2] = CONCAT71(uStack_cf,local_d0);
              *puVar16 = 0;
              puVar16[1] = 0;
              *puVar12 = puVar16;
              if (*(long *)*param_3 == 0) {
                puVar12 = puVar16;
              }
              else {
                *param_3 = *(long *)*param_3;
                puVar12 = (undefined8 *)*puVar12;
              }
              FUN_010108e0(param_3[1],puVar12);
              param_3[3] = param_3[3] + 1;
            }
            puVar9 = puVar16 + 8;
            if (((long *)puVar16[0xb] == local_118) ||
               (uVar6 = (**(code **)(*(long *)puVar16[0xb] + 0x20))(), (uVar6 & 1) != 0)) {
              if ((*puVar9 & 1) != 0) {
                (**(code **)(*(long *)puVar16[0xb] + 0x18))
                          ((long *)puVar16[0xb],puVar16[10],puVar16[8] & 0xfffffffffffffffe,1);
                *(undefined2 *)(puVar16 + 8) = 0;
              }
              puVar16[10] = local_120;
              puVar16[9] = sStack_128;
              *puVar9 = (ulong)local_130;
              local_130 = (byte *)((ulong)local_130 & 0xffffffffffff0000);
            }
            else {
                    /* try { // try from 0025b554 to 0025b55f has its CatchHandler @ 0025b6e4 */
              FUN_01d0e1a8(puVar9,&local_130);
            }
            if ((local_b0 & 1) != 0) {
              (**(code **)(*local_98 + 0x18))(local_98,local_a0,local_b0 & 0xfffffffffffffffe,1);
            }
            if (((ulong)local_130 & 1) != 0) {
              (**(code **)(*local_118 + 0x18))
                        (local_118,local_120,(ulong)local_130 & 0xfffffffffffffffe,1);
            }
          }
        }
        FUN_002650a4(auStack_100);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
  }
  pvVar17 = local_80;
  if (((ulong)local_90 & 1) == 0) {
    pvVar17 = (void *)((long)&local_90 + 1);
  }
  FUN_002000f8(param_1,*(undefined4 *)(param_2 + 0x30),pvVar17,param_3);
  if (((ulong)local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,(ulong)local_90 & 0xfffffffffffffffe,1);
  }
  return;
}


