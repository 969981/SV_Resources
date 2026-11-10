/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba3e2c; name: FUN_00ba3e2c
 */


undefined8
FUN_00ba3e2c(undefined8 *param_1,long *param_2,long *param_3,long param_4,string *param_5,
            undefined8 *param_6)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long local_118;
  char *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  char local_100 [24];
  undefined *local_e8;
  byte *pbStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_69;
  
  if (param_2 == param_3) {
    plVar8 = (long *)*param_6;
    if (plVar8 != (long *)0x0) {
      lVar13 = plVar8[1] - *plVar8;
      lVar13 = (lVar13 * 0x10000000 >> 0x20 & (lVar13 * 0x10000000 >> 0x3f ^ 0xffffffffffffffffU)) +
               1;
      piVar11 = (int *)*plVar8;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        iVar4 = *piVar11;
        piVar11 = piVar11 + 4;
        if (iVar4 == *(int *)(param_4 + 0x38)) {
          std::operator+("Option \"",param_5);
          puVar6 = (ulong *)std::string::append((char *)&local_118);
          pbStack_e0 = (byte *)puVar6[1];
          local_d8 = puVar6[2];
          local_e8 = (undefined *)*puVar6;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          FUN_00b89f94(*param_1,param_1[1] + 0x18,param_1[2],7,&local_e8);
          uVar5 = local_d8;
          if ((((ulong)local_e8 & 1) != 0) && (local_d8 != 0)) {
            lVar13 = tpidr_el0;
            plVar8 = *(long **)(lVar13 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar13 + 0x30) = DAT_04859430;
            }
            uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar7 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,uVar5,0,8);
            }
            else {
              FUN_00c48fe8(plVar8,uVar5,0,8);
            }
          }
          if ((((byte)local_118 & 1) != 0) && (lVar13 = CONCAT44(uStack_104,local_108), lVar13 != 0)
             ) {
            lVar12 = tpidr_el0;
            plVar8 = *(long **)(lVar12 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,lVar13,0,8);
            }
            else {
              FUN_00c48fe8(plVar8,lVar13,0,8);
            }
          }
          return 0;
        }
      }
    }
    return 1;
  }
  lVar12 = 0;
  lVar13 = 0;
  puVar1 = PTR_DAT_047dacc8 + 0x10;
  do {
    plVar8 = (long *)*param_6;
    if (plVar8 == (long *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)((ulong)(plVar8[1] - *plVar8) >> 4);
    }
    if (iVar4 <= lVar13) {
      return 1;
    }
    lVar9 = *plVar8;
    if (*(int *)(lVar9 + lVar12) == *(int *)(*param_2 + 0x38)) {
      uVar2 = *(uint *)(*param_2 + 0x3c);
      if (uVar2 == 10) {
        if ((*(int *)(lVar9 + lVar12 + 4) == 4) &&
           (uVar5 = FUN_00ba3e2c(param_1,param_2 + 1,param_3,param_4,param_5,
                                 *(undefined8 *)(lVar9 + lVar12 + 8)), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
      else {
        if (uVar2 != 0xb) {
          local_100[0x10] = '\0';
          local_100[0x11] = '\0';
          local_100[0x12] = '\0';
          local_100[0x13] = '\0';
          local_100[0x14] = '\0';
          local_100[0x15] = '\0';
          local_100[0x16] = '\0';
          local_100[0x17] = '\0';
          local_118 = CONCAT44(local_118._4_4_,3);
          local_108 = 0x16eb;
          local_110 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
          ;
          local_100[0] = '\0';
          local_100[1] = '\0';
          local_100[2] = '\0';
          local_100[3] = '\0';
          local_100[4] = '\0';
          local_100[5] = '\0';
          local_100[6] = '\0';
          local_100[7] = '\0';
          local_100[8] = '\0';
          local_100[9] = '\0';
          local_100[10] = '\0';
          local_100[0xb] = '\0';
          local_100[0xc] = '\0';
          local_100[0xd] = '\0';
          local_100[0xe] = '\0';
          local_100[0xf] = '\0';
          std::string::append(local_100);
          snprintf((char *)&local_e8,0x80,"%d",(ulong)uVar2);
          local_69 = 0;
          std::string::append(local_100);
          FUN_00bb0e90(&local_118);
          FUN_00bb0d74(&local_118);
          return 0;
        }
        if (*(int *)(lVar9 + lVar12 + 4) == 3) {
          local_118 = 0;
          pbVar10 = *(byte **)(lVar9 + lVar12 + 8);
          pbStack_e0 = *(byte **)(pbVar10 + 0x10);
          bVar3 = (*pbVar10 & 1) == 0;
          local_d0 = 0;
          if (bVar3) {
            pbStack_e0 = pbVar10 + 1;
          }
          uVar2 = (uint)(*pbVar10 >> 1);
          if (!bVar3) {
            uVar2 = *(uint *)(pbVar10 + 8);
          }
          local_d8 = CONCAT44(uVar2,uVar2);
          local_e8 = puVar1;
          uVar5 = FUN_00c012e4(&local_118,&local_e8);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = FUN_00ba3e2c(param_1,param_2 + 1,param_3,param_4,param_5,&local_118),
             (uVar5 & 1) == 0)) {
            if (local_118 == 0) {
              return 0;
            }
            FUN_00bfee44(&local_118);
            return 0;
          }
          if (local_118 != 0) {
            FUN_00bfee44(&local_118);
          }
        }
      }
    }
    lVar13 = lVar13 + 1;
    lVar12 = lVar12 + 0x10;
  } while( true );
}


