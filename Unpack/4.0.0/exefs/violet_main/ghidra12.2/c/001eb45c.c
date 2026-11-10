/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eb45c; name: FUN_001eb45c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_001eb45c(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  if ((DAT_047ecdcc & 1) == 0) {
    DAT_047ecdcd._0_7_ = _DAT_03c2b613;
    DAT_047ecdcd._7_1_ = s__7_64_1_03c2b61a[0];
    uRam00000000047ecdd5 = s__7_64_1_03c2b61a._1_7_;
    sVar2 = strlen((char *)&DAT_047ecdcd);
    uVar5 = 200 - sVar2;
    puVar6 = (undefined1 *)((long)&DAT_047ecdcd + sVar2);
    if ((1 < uVar5) && (lVar3 = thunk_FUN_001ec43c(sVar2 + 0x47ecdce,199 - sVar2), lVar3 != 0)) {
      *puVar6 = 0x20;
      uVar5 = uVar5 - (lVar3 + 1);
      puVar6 = puVar6 + lVar3 + 1;
    }
    uVar4 = FUN_00385590();
    iVar1 = FUN_001ce394(puVar6,uVar5," zlib/%s",uVar4);
    FUN_001d7670(puVar6 + iVar1,uVar5 - (long)iVar1);
    DAT_047ecdcc = 1;
  }
  return &DAT_047ecdcd;
}


