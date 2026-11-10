/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c738f0; name: FUN_00c738f0
 */


uint FUN_00c738f0(long param_1,long param_2,int param_3)

{
  char *__src;
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *local_170;
  byte *pbStack_168;
  char *local_160;
  long *local_158;
  byte local_150 [256];
  undefined8 local_50;
  undefined8 local_48;
  
  memset(local_150,0,0x100);
  if (param_3 == -1) {
    param_3 = *(int *)(param_1 + 0x294);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar2 + 0x30) = DAT_04859430;
  }
  local_50 = *(undefined8 *)(lVar2 + 0x30);
  local_48 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  *(undefined2 *)(lVar2 + 0x38) = 1;
  std::to_string(param_3);
  __src = (char *)((ulong)&local_170 | 1);
  if (((ulong)local_170 & 1) != 0) {
    __src = local_160;
  }
  local_150[0] = 0;
  strcat((char *)local_150,__src);
  strcat((char *)local_150,*(char **)(param_2 + 8));
  if ((((byte)local_170 & 1) != 0) && (local_160 != (char *)0x0)) {
    plVar10 = *(long **)(lVar2 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar2 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar10,local_160,0,8);
        goto LAB_00c739b8;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,local_160,0,8);
  }
LAB_00c739b8:
  puVar9 = &DAT_cbf29ce484222645;
  *(undefined8 *)(lVar2 + 0x30) = local_50;
  *(undefined2 *)(lVar2 + 0x38) = (undefined2)local_48;
  local_160 = (char *)strlen((char *)local_150);
  if (local_150[0] != 0) {
    pbVar8 = (byte *)((ulong)local_150 | 1);
    bVar1 = local_150[0];
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
  }
  local_158 = (long *)0x0;
  local_170 = puVar9;
  pbStack_168 = local_150;
  uVar3 = FUN_00c73bb4(param_1,&local_170);
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  return uVar3 & 1;
}


