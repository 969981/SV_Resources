/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00270e0c; name: FUN_00270e0c
 */


void FUN_00270e0c(ulong *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  undefined1 *puVar10;
  ulong uVar11;
  char *__s;
  ulong uVar12;
  ulong uVar13;
  
  puVar6 = PTR_LAB_047cba48;
  puVar5 = PTR_FUN_047cba38;
  uVar4 = s_grpc_ssl_target_name_override_03c963d9._21_8_;
  uVar3 = s_grpc_ssl_target_name_override_03c963d9._0_8_;
  if (param_2[1] != *param_2) {
    uVar2 = CONCAT53(s_grpc_ssl_target_name_override_03c963d9._16_5_,
                     s_grpc_ssl_target_name_override_03c963d9._13_3_);
    uVar1 = CONCAT35(s_grpc_ssl_target_name_override_03c963d9._13_3_,
                     s_grpc_ssl_target_name_override_03c963d9._8_5_);
    uVar11 = 1;
    uVar13 = 0;
    do {
      uVar12 = uVar11;
      pcVar8 = (char *)FUN_0049e770(puVar5,0x20);
      pcVar8[0x1d] = '\0';
      *(undefined8 *)(pcVar8 + 8) = uVar1;
      *(undefined8 *)pcVar8 = uVar3;
      *(undefined8 *)(pcVar8 + 0x15) = uVar4;
      *(undefined8 *)(pcVar8 + 0xd) = uVar2;
      __s = *(char **)(*param_2 + uVar13 * 0x20 + 8);
      sVar9 = strlen(__s);
      if (sVar9 == 0x1d) {
        iVar7 = memcmp(pcVar8,__s,0x1d);
        FUN_0049e790(puVar6,pcVar8);
        if (iVar7 == 0) {
          pcVar8 = *(char **)(*param_2 + uVar13 * 0x20 + 0x10);
          sVar9 = strlen(pcVar8);
          if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar9 < 0x17) {
            puVar10 = (undefined1 *)((long)param_1 + 1);
            *(char *)param_1 = (char)((int)sVar9 << 1);
            if (sVar9 != 0) goto LAB_00270f74;
          }
          else {
            uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
            puVar10 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
            param_1[1] = sVar9;
            param_1[2] = (ulong)puVar10;
            *param_1 = uVar11 | 1;
LAB_00270f74:
            memcpy(puVar10,pcVar8,sVar9);
          }
          puVar10 = puVar10 + sVar9;
          goto LAB_00270e38;
        }
      }
      else {
        FUN_0049e790(puVar6,pcVar8);
      }
      uVar11 = (ulong)((int)uVar12 + 1);
      uVar13 = uVar12;
    } while (uVar12 < (ulong)(param_2[1] - *param_2 >> 5));
  }
  puVar10 = (undefined1 *)((long)param_1 + 1);
  *(undefined1 *)param_1 = 0;
LAB_00270e38:
  *puVar10 = 0;
  return;
}


