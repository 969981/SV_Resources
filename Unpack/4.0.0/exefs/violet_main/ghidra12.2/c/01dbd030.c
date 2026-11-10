/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbd030; name: FUN_01dbd030
 */


ulong FUN_01dbd030(void)

{
  int iVar1;
  tm *ptVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  time_t local_20;
  undefined8 local_18;
  
  local_18 = FUN_00e675fc();
  local_20 = FUN_00e675f4(&local_18);
  ptVar2 = localtime(&local_20);
  if (ptVar2 == (tm *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    iVar1 = ptVar2->tm_year;
    uVar7 = (ulong)(ptVar2->tm_mon * 0x10000 + 0x10000U & 0xff0000);
    uVar6 = (ulong)(uint)(ptVar2->tm_mday << 0x18);
    uVar3 = (ulong)(byte)ptVar2->tm_sec << 0x30;
    uVar4 = (ulong)(byte)ptVar2->tm_min << 0x28;
    uVar5 = (ulong)(byte)ptVar2->tm_hour << 0x20;
    uVar8 = (ulong)(iVar1 + ((uint)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25) - (iVar1 >> 0x1f)) *
                            -100 & 0xffff);
  }
  return uVar4 | uVar3 | uVar5 | uVar6 | uVar7 | uVar8;
}


