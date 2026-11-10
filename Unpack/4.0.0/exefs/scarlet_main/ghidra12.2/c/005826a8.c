/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005826a8; name: FUN_005826a8
 */


undefined1 * FUN_005826a8(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  byte *__src_00;
  byte *pbVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar7 = 0;
    lVar8 = (ulong)*(uint *)(param_1 + 0x18) * 8;
    do {
      while( true ) {
        pbVar5 = *(byte **)(*(long *)(param_1 + 0x20) + lVar7 + 8);
        if ((*pbVar5 & 1) != 0) break;
        FUN_00532960(pbVar5 + 1,*pbVar5 >> 1);
        bVar1 = *pbVar5;
        if ((bVar1 & 1) == 0) goto LAB_00582728;
LAB_00582708:
        sVar6 = *(size_t *)(pbVar5 + 8);
        if ((long)sVar6 < 0x80) goto LAB_0058272c;
LAB_0058277c:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,1,pbVar5,param_2);
        lVar7 = lVar7 + 8;
        if (lVar8 == lVar7) goto LAB_005827a0;
      }
      FUN_00532960(*(undefined8 *)(pbVar5 + 0x10),*(undefined8 *)(pbVar5 + 8));
      bVar1 = *pbVar5;
      if ((bVar1 & 1) != 0) goto LAB_00582708;
LAB_00582728:
      sVar6 = (size_t)(bVar1 >> 1);
LAB_0058272c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar6) goto LAB_0058277c;
      *param_2 = 10;
      param_2[1] = (char)sVar6;
      __src_00 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        __src_00 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar6);
      param_2 = param_2 + 2 + sVar6;
      lVar7 = lVar7 + 8;
    } while (lVar8 != lVar7);
  }
LAB_005827a0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar4 + 8) & 1) == 0) {
      __src = (void *)(uVar4 + 9);
      uVar3 = (ulong)(*(byte *)(uVar4 + 8) >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar4 + 0x10);
      __src = *(void **)(uVar4 + 0x18);
    }
    sVar6 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar6) {
      puVar2 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar6);
    param_2 = param_2 + sVar6;
  }
  return param_2;
}


