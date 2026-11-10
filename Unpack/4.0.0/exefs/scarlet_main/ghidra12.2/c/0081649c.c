/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081649c; name: FUN_0081649c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0081649c(long *param_1,byte param_2,long param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [8];
  undefined4 uVar6;
  ulong uVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  ulong local_268;
  size_t local_260;
  void *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  int local_228 [4];
  undefined8 local_218;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined *local_1d0;
  undefined2 local_1c8;
  undefined1 local_188 [8];
  undefined1 *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined *local_168;
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d [197];
  byte local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined4 uStack_8f;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined8 local_88;
  undefined1 local_80;
  byte local_78 [16];
  undefined8 local_68;
  
  if ((char)param_1[0xf8] == '\x05') {
    return;
  }
  uVar7 = FUN_0078b12c(param_1[0xdf] + 0x498);
  if ((uVar7 & 1) == 0) {
    return;
  }
  FUN_00817034(local_78,param_1);
  puVar4 = PTR_DAT_047d0c98;
  lVar15 = param_1[0xf9];
  lVar12 = param_1[0xfa];
  local_168 = PTR_DAT_047d0c98 + 0x68;
  local_180 = &local_160;
  local_188 = (undefined1  [8])(PTR_DAT_047d0c98 + 0x10);
  local_178 = 0xc0;
  local_160 = 0;
  lVar13 = 0;
  puVar10 = (undefined8 *)local_188;
  do {
    *(undefined2 *)((long)puVar10 + 0x29) = 0;
    lVar1 = lVar13 + 4;
    *(undefined1 *)((long)puVar10 + 0x2b) = 0;
    puVar10 = (undefined8 *)((long)local_188 + lVar1);
    local_15d[lVar13 + 1] = 0;
    lVar13 = lVar1;
  } while (lVar1 != 0xc0);
  uStack_174 = 0;
  local_170 = 0;
  FUN_0078a4fc(param_3,local_188);
  FUN_00819d14(&local_1d0);
  local_1d0 = PTR_DAT_047d18e8 + 0x10;
  FUN_00819e18(&local_1d0,local_78);
  switch(param_2) {
  case 1:
    local_1c8 = 4;
    FUN_007935cc(param_1 + 0x10b);
    FUN_001fcec0(param_1 + 0x103,local_78);
    break;
  case 2:
    local_1c8 = 3;
    FUN_001fcec0(param_1 + 0x103,local_78);
    uVar7 = FUN_00815e84(param_1,&local_1d0);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    FUN_0081afbc(local_188,0x19);
    local_1d8 = (undefined8 *)local_188;
    *(undefined4 *)((long)local_188 + 0xc) = 0x11000000;
    local_188 = (undefined1  [8])0x0;
    FUN_00819e6c(&local_1d0,&local_1d8);
    puVar10 = local_1d8;
    local_1d8 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    auVar5 = local_188;
    local_188 = (undefined1  [8])0x0;
    if (auVar5 != (undefined1  [8])0x0) {
      (*(code *)**(undefined8 **)auVar5)(auVar5);
      FUN_0049e790(PTR_LAB_047cba48,auVar5);
    }
    local_1e0 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (local_1e0 != (undefined8 *)0x0) {
      FUN_0081bb44(local_1e0,0xd,*(undefined4 *)((long)param_1 + 0x5c));
    }
    FUN_00819e6c(&local_1d0,&local_1e0);
    puVar10 = local_1e0;
    local_1e0 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    plVar11 = param_1 + 0x10a;
    goto LAB_00816d8c;
  case 3:
    uVar7 = FUN_0078b12c(param_3);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    local_1c8 = 9;
    uVar7 = FUN_00815e84(param_1,&local_1d0);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    FUN_001fcec0(param_1[0x10c] + (param_4 & 0xffff) * 0xb0 + 0x60,local_78);
    local_168 = puVar4 + 0x68;
    local_188 = (undefined1  [8])(puVar4 + 0x10);
    local_180 = &local_160;
    local_178 = 0xc0;
    local_160 = 0;
    lVar12 = 0;
    puVar10 = (undefined8 *)local_188;
    do {
      *(undefined2 *)((long)puVar10 + 0x29) = 0;
      lVar13 = lVar12 + 4;
      *(undefined1 *)((long)puVar10 + 0x2b) = 0;
      puVar10 = (undefined8 *)((long)local_188 + lVar13);
      local_15d[lVar12 + 1] = 0;
      lVar12 = lVar13;
    } while (lVar13 != 0xc0);
    uStack_174 = 0;
    local_170 = 0;
    FUN_0078a650(param_3,local_188);
    pcVar8 = (char *)FUN_00793098(local_188);
    sVar9 = strlen(pcVar8);
    if (0xffffffffffffffef < sVar9) {
LAB_0081702c:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar9 < 0x17) {
      local_98 = (byte)((int)sVar9 << 1);
      pvVar14 = (void *)((ulong)&local_98 | 1);
      if (sVar9 != 0) goto LAB_00816c50;
    }
    else {
      uVar7 = sVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_98 = (byte)uVar7 | 1;
      uStack_97 = (undefined7)(uVar7 >> 8);
      uStack_90 = (undefined1)sVar9;
      uStack_8f = (undefined4)(sVar9 >> 8);
      uStack_8b = (undefined1)(sVar9 >> 0x28);
      uStack_8a = (undefined1)(sVar9 >> 0x30);
      uStack_89 = (undefined1)(sVar9 >> 0x38);
      local_88 = pvVar14;
LAB_00816c50:
      memcpy(pvVar14,pcVar8,sVar9);
    }
    *(undefined1 *)((long)pvVar14 + sVar9) = 0;
    FUN_00818818(local_228,&local_98,*(undefined2 *)(param_3 + 0x18));
    if ((local_98 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
    local_230 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    if (local_230 != (undefined8 *)0x0) {
      FUN_0081b588(local_230,0x12,local_228);
    }
    FUN_00819e6c(&local_1d0,&local_230);
    puVar10 = local_230;
    local_230 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    if (((byte)local_228[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_218);
    }
    uVar2 = *(ushort *)(param_1[0x10c] + (param_4 & 0xffff) * 0xb0 + 0x58);
    local_238 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (local_238 != (undefined8 *)0x0) {
      FUN_0081bb44(local_238,0xc,(ulong)uVar2 << 0x10);
    }
    FUN_00819e6c(&local_1d0,&local_238);
    puVar10 = local_238;
    local_238 = (undefined8 *)0x0;
    goto joined_r0x0081701c;
  case 4:
    uVar7 = FUN_0078b12c(param_3);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    local_1c8 = 9;
    uVar7 = FUN_00815e84(param_1,&local_1d0);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    FUN_001fcec0(param_1[0x10c] + (param_4 & 0xffff) * 0xb0 + 0x78,local_78);
    local_168 = puVar4 + 0x68;
    local_188 = (undefined1  [8])(puVar4 + 0x10);
    local_180 = &local_160;
    local_178 = 0xc0;
    local_160 = 0;
    lVar12 = 0;
    puVar10 = (undefined8 *)local_188;
    do {
      *(undefined2 *)((long)puVar10 + 0x29) = 0;
      lVar13 = lVar12 + 4;
      *(undefined1 *)((long)puVar10 + 0x2b) = 0;
      puVar10 = (undefined8 *)((long)local_188 + lVar13);
      local_15d[lVar12 + 1] = 0;
      lVar12 = lVar13;
    } while (lVar13 != 0xc0);
    uStack_174 = 0;
    local_170 = 0;
    FUN_0078a650(param_3,local_188);
    pcVar8 = (char *)FUN_00793098(local_188);
    sVar9 = strlen(pcVar8);
    if (0xffffffffffffffef < sVar9) goto LAB_0081702c;
    if (sVar9 < 0x17) {
      local_98 = (byte)((int)sVar9 << 1);
      pvVar14 = (void *)((ulong)&local_98 | 1);
      if (sVar9 != 0) goto LAB_00816f14;
    }
    else {
      uVar7 = sVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_98 = (byte)uVar7 | 1;
      uStack_97 = (undefined7)(uVar7 >> 8);
      uStack_90 = (undefined1)sVar9;
      uStack_8f = (undefined4)(sVar9 >> 8);
      uStack_8b = (undefined1)(sVar9 >> 0x28);
      uStack_8a = (undefined1)(sVar9 >> 0x30);
      uStack_89 = (undefined1)(sVar9 >> 0x38);
      local_88 = pvVar14;
LAB_00816f14:
      memcpy(pvVar14,pcVar8,sVar9);
    }
    *(undefined1 *)((long)pvVar14 + sVar9) = 0;
    FUN_00818818(local_228,&local_98,*(undefined2 *)(param_3 + 0x18));
    if ((local_98 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
    local_240 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    if (local_240 != (undefined8 *)0x0) {
      FUN_0081b588(local_240,0x12,local_228);
    }
    FUN_00819e6c(&local_1d0,&local_240);
    puVar10 = local_240;
    local_240 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    if (((byte)local_228[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_218);
    }
    uVar2 = *(ushort *)(param_1[0x10c] + (param_4 & 0xffff) * 0xb0 + 0x5a);
    local_248 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (local_248 != (undefined8 *)0x0) {
      FUN_0081bb44(local_248,0xc,(ulong)uVar2 << 0x10);
    }
    FUN_00819e6c(&local_1d0,&local_248);
    puVar10 = local_248;
    local_248 = (undefined8 *)0x0;
joined_r0x0081701c:
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    plVar11 = (long *)(param_1[0x10c] + (param_4 & 0xffff) * 0xb0 + 0xa0);
LAB_00816d8c:
    FUN_007935cc(plVar11);
    break;
  case 5:
  case 6:
    local_1c8 = 4;
    uVar7 = FUN_00815e84(param_1,&local_1d0);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    FUN_001fcec0(param_1 + 0x106,local_78);
    puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (param_2 == 5) {
      if (puVar10 != (undefined8 *)0x0) {
        FUN_0081bb44(puVar10,0xd,*(undefined4 *)((long)param_1 + 0x5c));
      }
      local_278 = puVar10;
      FUN_00819e6c(&local_1d0,&local_278);
      puVar10 = local_278;
      local_278 = (undefined8 *)0x0;
    }
    else {
      if (puVar10 != (undefined8 *)0x0) {
        FUN_0081bb44(puVar10,0xd,0);
      }
      local_280 = puVar10;
      FUN_00819e6c(&local_1d0,&local_280);
      puVar10 = local_280;
      local_280 = (undefined8 *)0x0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    break;
  default:
    local_180 = (undefined1 *)((ulong)local_180 & 0xffffffff00000000);
    local_188 = (undefined1  [8])0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,local_188);
    goto LAB_00816eac;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar7 = FUN_0078b12c(param_3);
    if ((uVar7 & 1) == 0) goto LAB_00816eac;
    local_1c8 = 0x16;
    uStack_97 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = (undefined1)((ulong)lVar15 >> 0x38);
    uStack_8a = (undefined1)((ulong)lVar15 >> 0x30);
    uStack_89 = (undefined1)((ulong)lVar15 >> 0x28);
    local_88._0_4_ =
         CONCAT13((char)((ulong)lVar15 >> 8),
                  CONCAT12((char)((ulong)lVar15 >> 0x10),
                           CONCAT11((char)((ulong)lVar15 >> 0x18),(char)((ulong)lVar15 >> 0x20))));
    uVar6 = (undefined4)local_88;
    uVar3 = (undefined1)((param_5 & 0xffffffff) >> 8);
    local_88._0_7_ = (uint7)(byte)((ulong)lVar12 >> 8) << 0x28;
    local_88 = (void *)CONCAT17(uVar3,(int7)local_88);
    local_88._0_5_ = CONCAT14((char)lVar15,uVar6);
    local_88._0_7_ = CONCAT16((char)lVar12,(undefined6)local_88);
    local_88 = (void *)CONCAT17(uVar3,(int7)local_88);
    local_80 = (undefined1)(param_5 & 0xffffffff);
    local_188 = (undefined1  [8])((ulong)local_188 & 0xffffffff00000000);
    local_268 = local_268 & 0xffffffff00000000;
    local_98 = param_2;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_188 | 4),(Result *)&local_268);
    FUN_00cbd7c0(local_228,local_188);
    if (local_228[0] != 0) goto LAB_00816eac;
    local_250 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (local_250 != (undefined8 *)0x0) {
      FUN_0081bdc4(local_250,0x13,&local_98,0x19);
    }
    FUN_00819e6c(&local_1d0,&local_250);
    puVar10 = local_250;
    local_250 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    local_168 = puVar4 + 0x68;
    local_188 = (undefined1  [8])(puVar4 + 0x10);
    local_180 = &local_160;
    local_178 = 0xc0;
    local_160 = 0;
    lVar12 = 0;
    puVar10 = (undefined8 *)local_188;
    do {
      *(undefined2 *)((long)puVar10 + 0x29) = 0;
      lVar13 = lVar12 + 4;
      *(undefined1 *)((long)puVar10 + 0x2b) = 0;
      puVar10 = (undefined8 *)((long)local_188 + lVar13);
      local_15d[lVar12 + 1] = 0;
      lVar12 = lVar13;
    } while (lVar13 != 0xc0);
    uStack_174 = 0;
    local_170 = 0;
    FUN_0078a650(param_3,local_188);
    pcVar8 = (char *)FUN_00793098(local_188);
    sVar9 = strlen(pcVar8);
    if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar9 < 0x17) {
      local_268 = CONCAT71(local_268._1_7_,(char)((int)sVar9 << 1));
      pvVar14 = (void *)((ulong)&local_268 | 1);
      if (sVar9 != 0) goto LAB_00816b18;
    }
    else {
      uVar7 = sVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_268 = uVar7 | 1;
      local_260 = sVar9;
      local_258 = pvVar14;
LAB_00816b18:
      memcpy(pvVar14,pcVar8,sVar9);
    }
    *(undefined1 *)((long)pvVar14 + sVar9) = 0;
    FUN_00818818(local_228,&local_268,*(undefined2 *)(param_3 + 0x18));
    if ((local_268 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_258);
    }
    local_270 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    if (local_270 != (undefined8 *)0x0) {
      FUN_0081b588(local_270,0x12,local_228);
    }
    FUN_00819e6c(&local_1d0,&local_270);
    puVar10 = local_270;
    local_270 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
    if (((byte)local_228[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_218);
    }
  }
  lVar12 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar12 != 0) {
    FUN_0081971c(lVar12,0,0x5dc);
  }
  uVar7 = FUN_0081a4bc(&local_1d0,lVar12);
  if ((uVar7 & 1) == 0) {
    local_180 = (undefined1 *)((ulong)local_180 & 0xffffffff00000000);
    local_188 = (undefined1  [8])0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,local_188);
  }
  else {
    FUN_007929a0(local_228,param_1[0xde],*(undefined8 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 8),
                 param_1[0xdf] + 0x498,&local_268);
    local_168 = puVar4 + 0x68;
    local_188 = (undefined1  [8])(puVar4 + 0x10);
    local_180 = &local_160;
    local_178 = 0xc0;
    local_160 = 0;
    lVar13 = 0;
    puVar10 = (undefined8 *)local_188;
    do {
      *(undefined2 *)((long)puVar10 + 0x29) = 0;
      lVar15 = lVar13 + 4;
      *(undefined1 *)((long)puVar10 + 0x2b) = 0;
      puVar10 = (undefined8 *)((long)local_188 + lVar15);
      local_15d[lVar13 + 1] = 0;
      lVar13 = lVar15;
    } while (lVar15 != 0xc0);
    uStack_174 = 0;
    local_170 = 0;
    FUN_0078a4fc(param_1[0xdf] + 0x498,local_188);
  }
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar12 + 0x18);
    *(undefined8 *)(lVar12 + 0x18) = 0;
    if (lVar13 != 0) {
      FUN_0049e800(lVar13);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar13);
    }
    FUN_0049e790(PTR_LAB_047cba48,lVar12);
  }
LAB_00816eac:
  FUN_0081cc58(&local_1d0);
  if ((local_78[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return;
}


