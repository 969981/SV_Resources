/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c4120; name: _INIT_85
 */


void _INIT_85(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_047d10a8;
  *(undefined8 *)PTR_DAT_047d10a8 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(undefined8 *)(puVar3 + 0x58) = 0;
  *(undefined8 *)(puVar3 + 0x60) = 0;
  *(undefined8 *)(puVar3 + 0x68) = 0;
  puVar4 = PTR_DAT_047d10b0;
  *(undefined4 *)PTR_DAT_047d10b0 = 3;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  puVar5 = PTR_DAT_047d10b8;
  *(undefined8 *)PTR_DAT_047d10b8 = 0x100000000;
  *(undefined4 *)(puVar5 + 8) = 2;
  nn::os::SdkAllocateTlsSlot(PTR_DAT_047d0968,(_func_void_ulong *)0x0);
  uVar2 = *(uint *)puVar4;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)((long)(puVar5 + uVar7 * 4) + 4);
        iVar6 = (int)uVar7;
        *(int *)(puVar3 + (ulong)*(uint *)(puVar5 + uVar7 * 4) * 4) = iVar6;
        uVar7 = uVar7 + 2;
        *(int *)(puVar3 + (ulong)uVar1 * 4) = iVar6 + 1;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
    }
    if ((uVar2 & 1) != 0) {
      *(int *)(puVar3 + (ulong)*(uint *)(puVar5 + uVar7 * 4) * 4) = (int)uVar7;
    }
  }
  return;
}


