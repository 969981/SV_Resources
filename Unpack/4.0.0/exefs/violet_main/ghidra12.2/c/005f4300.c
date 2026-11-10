/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f4300; name: FUN_005f4300
 */


undefined * FUN_005f4300(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  if (((*PTR_DAT_047ceb88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047ceb88), iVar4 != 0))
  {
    FUN_0025320c(PTR_DAT_047ceba0);
    __cxa_guard_release(PTR_DAT_047ceb88);
  }
  if (((*PTR_DAT_047ceb90 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047ceb90), puVar3 = PTR_DAT_047ceb98, iVar4 != 0)) {
    uVar5 = FUN_00253290(PTR_DAT_047ceba0);
    lVar6 = 0;
    iVar4 = 1;
    *(uint *)puVar3 = uVar5;
    while( true ) {
      uVar5 = (int)lVar6 + (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      *(uint *)(puVar3 + lVar6 * 4 + 4) = uVar5;
      if (lVar6 == 0x26e) break;
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 2;
      iVar2 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965;
      uVar5 = iVar2 + iVar1;
      *(int *)(puVar3 + lVar6 * 4 + 8) = (int)lVar6 + iVar2 + 2;
      lVar6 = lVar6 + 2;
    }
    *(undefined8 *)(puVar3 + 0x9c0) = 0;
    __cxa_guard_release(PTR_DAT_047ceb90);
  }
  return PTR_DAT_047ceb98;
}


