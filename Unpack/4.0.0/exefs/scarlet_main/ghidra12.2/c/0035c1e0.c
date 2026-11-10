/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035c1e0; name: FUN_0035c1e0
 */


undefined8 * FUN_0035c1e0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *__s1;
  ulong unaff_x21;
  long *plVar14;
  ulong unaff_x23;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  int local_64;
  
  local_70 = FUN_00358a20(0);
  if (param_2 == (ulong *)0x0) {
    iVar8 = 0x2000;
    local_80 = 4;
    local_78 = 0x4000;
    iVar9 = 0x400000;
    local_64 = 0x100;
  }
  else if (*param_2 == 0) {
    local_64 = 0x100;
    iVar8 = 0x2000;
    iVar9 = 0x400000;
    local_80 = 4;
    local_78 = 0x4000;
  }
  else {
    lVar17 = 0;
    uVar16 = 0;
    local_80 = 4;
    local_78 = 0x4000;
    iVar9 = 0x400000;
    local_64 = 0x100;
    uVar15 = 0x2000;
    uVar13 = param_3;
    do {
      lVar1 = param_2[1] + lVar17;
      __s1 = *(char **)(lVar1 + 8);
      iVar8 = strcmp(__s1,"grpc.experimental.tcp_read_chunk_size");
      if (iVar8 == 0) {
        unaff_x23 = unaff_x23 & 0xffffffff00000000 | 0x2000000;
        uVar15 = FUN_00343f80(lVar1,uVar15 | 0x100000000,unaff_x23);
        uVar15 = uVar15 & 0xffffffff;
      }
      else {
        iVar8 = strcmp(__s1,"grpc.experimental.tcp_min_read_chunk_size");
        if (iVar8 == 0) {
          uVar13 = uVar13 & 0xffffffff00000000 | 0x2000000;
          local_64 = FUN_00343f80(lVar1,uVar15 | 0x100000000,uVar13);
        }
        else {
          iVar8 = strcmp(__s1,"grpc.experimental.tcp_max_read_chunk_size");
          if (iVar8 == 0) {
            unaff_x21 = unaff_x21 & 0xffffffff00000000 | 0x2000000;
            iVar9 = FUN_00343f80(lVar1,uVar15 | 0x100000000,unaff_x21);
          }
          else {
            iVar8 = strcmp(__s1,"grpc.resource_quota");
            if (iVar8 == 0) {
              FUN_00359090(local_70);
              local_70 = FUN_003590f0(*(undefined8 *)(param_2[1] + lVar17 + 0x10));
            }
            else {
              iVar8 = strcmp(__s1,"grpc.experimental.tcp_tx_zerocopy_enabled");
              if (iVar8 == 0) {
                FUN_003440e0(lVar1,0);
              }
              else {
                iVar8 = strcmp(__s1,"grpc.experimental.tcp_tx_zerocopy_send_bytes_threshold");
                if (iVar8 == 0) {
                  local_78 = FUN_00343f80(lVar1,0x4000);
                }
                else {
                  iVar8 = strcmp(__s1,"grpc.experimental.tcp_tx_zerocopy_max_simultaneous_sends");
                  if (iVar8 == 0) {
                    local_80 = FUN_00343f80(lVar1,4);
                  }
                }
              }
            }
          }
        }
      }
      iVar8 = (int)uVar15;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x20;
    } while (uVar16 < *param_2);
  }
  iVar2 = iVar9;
  if (local_64 <= iVar9) {
    iVar2 = local_64;
  }
  iVar3 = iVar9;
  if (iVar8 <= iVar9) {
    iVar3 = iVar8;
  }
  iVar4 = iVar2;
  if (iVar2 <= iVar8) {
    iVar4 = iVar3;
  }
  puVar11 = (undefined8 *)FUN_0038c780(0x338);
  *puVar11 = &PTR_LAB_044964f8;
  uVar12 = FUN_0038ccb0(param_3);
  puVar11[0x41] = uVar12;
  uVar10 = FUN_00355010(param_1);
  puVar11[0x66] = 0;
  puVar11[0x2d] = 0;
  *(undefined4 *)(puVar11 + 2) = uVar10;
  puVar11[0x32] = 0;
  puVar11[0x31] = 0;
  puVar11[0x34] = 0;
  puVar11[0x33] = 0;
  *(undefined4 *)(puVar11 + 0x55) = 0xffffffff;
  *(int *)(puVar11 + 7) = iVar2;
  *(int *)((long)puVar11 + 0x3c) = iVar9;
  puVar11[4] = 0;
  puVar11[3] = (double)iVar4;
  *(undefined1 *)((long)puVar11 + 0x14) = 1;
  *(undefined2 *)((long)puVar11 + 0x2ac) = 0x100;
  puVar11[0x54] = 0;
  FUN_0035c5b0(puVar11 + 0x57,local_80,(long)local_78);
  plVar14 = puVar11 + 5;
  *plVar14 = 1;
  puVar11[6] = 0;
  puVar11[1] = param_1;
  FUN_00368450(puVar11 + 8);
  uVar12 = FUN_003591e0(local_70,param_3);
  puVar11[0x42] = uVar12;
  FUN_00359e50(puVar11 + 0x43,uVar12,&LAB_0035c700,puVar11);
  FUN_00359090(local_70);
  FUN_0038db00(puVar11 + 0x50);
  puVar11[0x4f] = 0;
  puVar11[0x36] = &LAB_0035c810;
  puVar11[0x37] = puVar11;
  puVar11[0x38] = 0;
  uVar16 = FUN_00354f70();
  puVar11[0x3c] = 0;
  *(undefined4 *)(puVar11 + 0x2e) = 1;
  puVar5 = &LAB_0035c9f0;
  if ((uVar16 & 1) == 0) {
    puVar5 = &LAB_0035cf50;
  }
  *(undefined1 *)((long)puVar11 + 0x174) = 0;
  puVar11[0x3a] = puVar5;
  puVar11[0x3b] = puVar11;
  uVar16 = FUN_00354f30();
  if ((uVar16 & 1) != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    puVar11[0x56] = 0;
    puVar11[0x3e] = &LAB_0035cf90;
    puVar11[0x3f] = puVar11;
    puVar11[0x40] = 0;
    FUN_00355070(puVar11[1],puVar11 + 0x3d);
  }
  return puVar11;
}


