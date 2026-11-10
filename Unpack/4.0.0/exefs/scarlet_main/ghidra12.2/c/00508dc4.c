/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00508dc4; name: FUN_00508dc4
 */


void FUN_00508dc4(long param_1,long *param_2,long *param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  byte local_108 [8];
  ulong local_100;
  ulong local_f8;
  byte *local_f0;
  byte *local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  uint local_c8;
  undefined8 local_c4;
  int local_bc;
  int iStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte *local_a0;
  byte *local_98;
  void *local_90;
  ulong local_88;
  byte *local_80;
  void *local_78;
  
  uVar3 = DAT_03cb53e0;
  lVar6 = *param_2;
  if (0 < (int)((ulong)(param_2[1] - lVar6) >> 4)) {
    pvVar9 = (void *)((ulong)&local_88 | 1);
    pvVar7 = (void *)((ulong)&local_a0 | 1);
    lVar13 = 0;
    lVar10 = 0;
    do {
      local_f0 = (byte *)&local_e0;
      lVar4 = FUN_00533400(*(undefined4 *)(lVar6 + lVar13),&local_e0);
      pbVar12 = local_f0;
      pbVar11 = (byte *)(lVar4 - (long)&local_e0);
      local_e8 = pbVar11;
      if ((byte *)0xffffffffffffffef < pbVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar11 < (byte *)0x17) {
        local_88 = CONCAT71(local_88._1_7_,(char)((int)pbVar11 << 1));
        pvVar5 = pvVar9;
        if (pbVar11 != (byte *)0x0) goto LAB_00508ee0;
      }
      else {
        pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0)
        ;
        local_88 = (ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0 | 1;
        local_80 = pbVar11;
        local_78 = pvVar5;
LAB_00508ee0:
        memcpy(pvVar5,pbVar12,(size_t)pbVar11);
      }
      *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
      lVar6 = lVar6 + lVar13;
      switch(*(undefined4 *)(lVar6 + 4)) {
      case 0:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
                    /* try { // try from 00508f3c to 00508f5f has its CatchHandler @ 00509774 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c4d655,2);
        local_f0 = (byte *)&local_e0;
                    /* try { // try from 00508f68 to 00508f6f has its CatchHandler @ 005096e4 */
        lVar6 = FUN_00533420(*(undefined8 *)(lVar6 + 8),&local_e0);
        pbVar12 = local_f0;
        pbVar11 = (byte *)(lVar6 - (long)&local_e0);
        local_e8 = pbVar11;
        if ((byte *)0xffffffffffffffef < pbVar11) {
                    /* try { // try from 00509694 to 0050969b has its CatchHandler @ 0050969c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (pbVar11 < (byte *)0x17) {
          local_a0 = (byte *)CONCAT71(local_a0._1_7_,(char)((int)pbVar11 << 1));
          pvVar5 = pvVar7;
          if (pbVar11 != (byte *)0x0) goto LAB_00509364;
        }
        else {
          pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                        (ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0);
          local_a0 = (byte *)((ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0 | 1);
          local_98 = pbVar11;
          local_90 = pvVar5;
LAB_00509364:
          memcpy(pvVar5,pbVar12,(size_t)pbVar11);
        }
        *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
        pvVar5 = pvVar7;
        pbVar12 = (byte *)((ulong)local_a0 >> 1 & 0x7f);
        if (((ulong)local_a0 & 1) != 0) {
          pvVar5 = local_90;
          pbVar12 = local_98;
        }
                    /* try { // try from 0050939c to 005093a3 has its CatchHandler @ 005096e0 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_90);
        }
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c67c74,1);
        }
        else {
                    /* try { // try from 005093d0 to 005093e3 has its CatchHandler @ 00509774 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03bf391f,1);
        }
        break;
      case 1:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c69279,4);
                    /* try { // try from 005090fc to 00509107 has its CatchHandler @ 005096ec */
        FUN_00533e34(&local_f0,*(undefined4 *)(lVar6 + 8),8);
        pbVar11 = local_e8;
        pbVar12 = local_f0;
        if ((byte *)0xffffffffffffffef < local_e8) {
                    /* try { // try from 0050968c to 00509693 has its CatchHandler @ 005096a0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (local_e8 < (byte *)0x17) {
          local_a0 = (byte *)CONCAT71(local_a0._1_7_,(char)((int)local_e8 << 1));
          pvVar5 = pvVar7;
          if (local_e8 != (byte *)0x0) goto LAB_00509410;
        }
        else {
          pbVar1 = local_e8 + 0x10;
          pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)pbVar1 & 0xfffffffffffffff0);
          local_a0 = (byte *)((ulong)pbVar1 & 0xfffffffffffffff0 | 1);
          local_98 = pbVar11;
          local_90 = pvVar5;
LAB_00509410:
          memcpy(pvVar5,pbVar12,(size_t)pbVar11);
        }
        *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
        pvVar5 = pvVar7;
        pbVar12 = (byte *)((ulong)local_a0 >> 1 & 0x7f);
        if (((ulong)local_a0 & 1) != 0) {
          pvVar5 = local_90;
          pbVar12 = local_98;
        }
                    /* try { // try from 00509448 to 0050944f has its CatchHandler @ 005096e8 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_90);
        }
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c67c74,1);
        }
        else {
                    /* try { // try from 0050947c to 0050956b has its CatchHandler @ 00509774 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03bf391f,1);
        }
        break;
      case 2:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c69279,4);
                    /* try { // try from 0050903c to 00509047 has its CatchHandler @ 00509728 */
        FUN_00533e34(&local_f0,*(undefined8 *)(lVar6 + 8),0x10);
        pbVar11 = local_e8;
        pbVar12 = local_f0;
        if ((byte *)0xffffffffffffffef < local_e8) {
                    /* try { // try from 00509684 to 0050968b has its CatchHandler @ 005096a4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (local_e8 < (byte *)0x17) {
          local_a0 = (byte *)CONCAT71(local_a0._1_7_,(char)((int)local_e8 << 1));
          pvVar5 = pvVar7;
          if (local_e8 != (byte *)0x0) goto LAB_005092a0;
        }
        else {
          pbVar1 = local_e8 + 0x10;
          pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)pbVar1 & 0xfffffffffffffff0);
          local_a0 = (byte *)((ulong)pbVar1 & 0xfffffffffffffff0 | 1);
          local_98 = pbVar11;
          local_90 = pvVar5;
LAB_005092a0:
          memcpy(pvVar5,pbVar12,(size_t)pbVar11);
        }
        *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
        pvVar5 = pvVar7;
        pbVar12 = (byte *)((ulong)local_a0 >> 1 & 0x7f);
        if (((ulong)local_a0 & 1) != 0) {
          pvVar5 = local_90;
          pbVar12 = local_98;
        }
                    /* try { // try from 005092d8 to 005092df has its CatchHandler @ 005096f0 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_90);
        }
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c67c74,1);
        }
        else {
                    /* try { // try from 0050930c to 0050931f has its CatchHandler @ 00509774 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03bf391f,1);
        }
        break;
      case 3:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
                    /* try { // try from 00509094 to 005090f7 has its CatchHandler @ 00509774 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        pbVar12 = *(byte **)(lVar6 + 8);
        if ((*pbVar12 & 1) == 0) {
          local_f0 = pbVar12 + 1;
          local_d8 = (uint)(*pbVar12 >> 1);
        }
        else {
          local_d8 = (uint)*(undefined8 *)(pbVar12 + 8);
          local_f0 = *(byte **)(pbVar12 + 0x10);
        }
        local_e8 = local_f0 + (int)local_d8;
        local_e0 = 0;
        local_cc = 0;
        local_d4 = 0;
        local_c4 = uVar3;
        local_90 = (void *)0x0;
        local_a0 = (byte *)0x0;
        local_98 = (byte *)0x0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c8 = local_d8;
        local_bc = param_4;
        iStack_b8 = param_4;
        if ((*pbVar12 & 1) == 0) {
          uVar8 = (ulong)(*pbVar12 >> 1);
          if (param_4 < 1) goto LAB_005091e0;
LAB_005091a0:
                    /* try { // try from 005091a4 to 005091fb has its CatchHandler @ 0050972c */
          if ((uVar8 == 0) || (uVar8 = FUN_0051556c(&local_a0,&local_f0), (uVar8 & 1) == 0))
          goto LAB_005091e0;
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c4f2e4,3);
            (**(code **)(*param_3 + 0x10))(param_3);
          }
          else {
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c5c1fc,3);
          }
          FUN_00508dc4(param_1,&local_a0,param_3,param_4 + -1);
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(*param_3 + 0x18))(param_3);
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c33d7b,2);
          }
          else {
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c17d9f,2);
          }
        }
        else {
          uVar8 = *(ulong *)(pbVar12 + 8);
          if (0 < param_4) goto LAB_005091a0;
LAB_005091e0:
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c751d8,3);
                    /* try { // try from 005091fc to 00509207 has its CatchHandler @ 005096dc */
          FUN_00533030(local_108,pbVar12);
          uVar8 = (ulong)local_108 | 1;
          uVar2 = (ulong)(local_108[0] >> 1);
          if ((local_108[0] & 1) != 0) {
            uVar8 = local_f8;
            uVar2 = local_100;
          }
                    /* try { // try from 0050922c to 00509233 has its CatchHandler @ 005096bc */
          (**(code **)(*param_3 + 0x28))(param_3,uVar8,uVar2);
          if ((local_108[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_f8);
          }
          if (*(char *)(param_1 + 4) == '\0') {
                    /* try { // try from 00509570 to 00509617 has its CatchHandler @ 0050972c */
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c1f052,2);
          }
          else {
                    /* try { // try from 00509260 to 00509273 has its CatchHandler @ 0050972c */
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c90eb2,2);
          }
        }
        if (local_a0 != local_98) {
                    /* try { // try from 00509624 to 0050962b has its CatchHandler @ 005096a8 */
          FUN_00514600(&local_a0);
        }
        if (local_a0 != (byte *)0x0) {
          local_98 = local_a0;
          FUN_0049e790(PTR_LAB_047cba48);
        }
        FUN_0052b444(&local_f0);
        goto joined_r0x00509650;
      case 4:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
                    /* try { // try from 00508fc0 to 00509037 has its CatchHandler @ 00509774 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c4f2e4,3);
          (**(code **)(*param_3 + 0x10))(param_3);
        }
        else {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c5c1fc,3);
        }
        FUN_00508dc4(param_1,*(undefined8 *)(lVar6 + 8),param_3,param_4 + -1);
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x18))(param_3);
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c33d7b,2);
        }
        else {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03c17d9f,2);
        }
      }
joined_r0x00509650:
      if ((local_88 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_78);
      }
      lVar6 = *param_2;
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar10 < (int)((ulong)(param_2[1] - lVar6) >> 4));
  }
  return;
}


