/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fefb4; name: FUN_007fefb4
 */


void FUN_007fefb4(long param_1)

{
  void *__dest;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *__src;
  undefined8 uVar9;
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  void *pvStack_a0;
  undefined4 local_98;
  char local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 auStack_80 [32];
  
  __dest = (void *)(param_1 + 0x768);
  puVar1 = PTR_DAT_047d0a40 + 0x10;
  while( true ) {
    lVar7 = *(long *)(param_1 + 0x1338);
    if (lVar7 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1340) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x1348);
    if (iVar6 == *(int *)(param_1 + 0x1344)) {
      return;
    }
    lVar8 = lVar7 + (long)iVar6 * 0x5d0;
    uVar2 = *(uint *)(lVar8 + 0x5c0);
    if (0x4d8 < uVar2) break;
    __src = (void *)(lVar7 + (long)iVar6 * 0x5d0);
    memcpy(__dest,__src,(ulong)uVar2);
    iVar6 = *(int *)(param_1 + 0x1348) + 1;
    iVar3 = *(int *)(param_1 + 0x1340);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = iVar6 / iVar3;
    }
    iVar4 = *(int *)(lVar8 + 0x5c0);
    uVar9 = *(undefined8 *)((long)__src + 0x5c8);
    *(int *)(param_1 + 0x1348) = iVar6 - iVar5 * iVar3;
    if (iVar4 == 0) {
      return;
    }
    if ((iVar4 - 4U < 0x4d5) &&
       (lVar7 = FUN_00801444(*(undefined8 *)(param_1 + 0x1308),uVar9), lVar7 != 0)) {
      FUN_00796584(auStack_80);
      FUN_007969ac(auStack_80,uVar9);
      FUN_007969f8(auStack_80,0x4e96);
      local_98 = 0x4d8;
      local_94 = '\x01';
      local_90 = 4;
      local_88 = 0;
      local_a8 = puVar1;
      pvStack_a0 = __dest;
      FUN_007a3154(&local_a8);
      if (local_94 == '\x01') {
        iVar6 = 3;
      }
      else {
        FUN_007a4c48(auStack_c0,param_1 + 0xc40,iVar4);
        FUN_007a4c58(auStack_c0,__dest,iVar4,local_94);
        FUN_0079bd80(param_1,auStack_c0,auStack_80);
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 2;
    }
    if (iVar6 == 3) {
      return;
    }
  }
  return;
}


