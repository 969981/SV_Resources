/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0bcdc; name: FUN_00e0bcdc
 */


void FUN_00e0bcdc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_40 [2];
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e5060 + 0x10);
  param_1[1] = 0xffffffff;
  puVar4 = PTR_DAT_047e5068;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 1;
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  param_1[0xe] = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)param_1 + 0xb4) = 0x1000000ffffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0x3a83126f;
  param_1[0x1d] = 0;
  param_1[0x1e] = -1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x101000001030100;
  *(undefined8 *)((long)param_1 + 0x114) = 0x3c23d70a3f800000;
  *(undefined8 *)((long)param_1 + 0x11c) = 0xbf8000007f7fffee;
  *(undefined4 *)((long)param_1 + 0x124) = 0xbf800000;
  param_1[0x30] = 0;
  param_1[0x42] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = -0x8000000000000000;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3e80000040a00000;
  param_1[0x2c] = 0x3f0000003f800000;
  param_1[0x2d] = 0x3f8000003f000000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  lVar7 = param_2;
  if (param_2 == 0) {
    param_1[0x30] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    param_1[0x30] = param_2;
  }
  else {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)param_1[0x30];
    param_1[0x30] = param_2;
    if (plVar5 != (long *)0x0) {
      if (plVar5[1] != 0) {
        plVar1 = plVar5 + 2;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      lVar7 = param_1[0x30];
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  lVar9 = *(long *)(param_2 + 0x128);
  lVar8 = *(long *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x52) = 0xb;
  param_1[0x32] = 1;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x13] = lVar9;
  param_1[0x12] = lVar8;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 600);
  local_40[0] = 0x2908000010;
  FUN_00e08a00(lVar7 + 0x28,lVar7,local_40);
  lVar8 = param_1[0x30];
  lVar9 = *(long *)(lVar8 + 0x438);
  *(undefined4 *)((long)param_1 + 0x23c) = *(undefined4 *)(lVar9 + 0x28);
  iVar6 = *(int *)(lVar9 + 0x28);
  lVar7 = (long)iVar6;
  if ((int)(*(uint *)(lVar9 + 0x2c) & 0x7fffffff) <= iVar6) {
    FUN_0310600c(lVar9 + 0x20,PTR_PTR_047d1a50,lVar7 + 1);
    iVar6 = *(int *)(lVar9 + 0x28);
  }
  *(long **)(*(long *)(lVar9 + 0x20) + (long)iVar6 * 8) = param_1;
  *(int *)(lVar9 + 0x28) = (int)(lVar7 + 1);
  FUN_031249a0(lVar8 + 0xf8,lVar8,param_1);
  return;
}


