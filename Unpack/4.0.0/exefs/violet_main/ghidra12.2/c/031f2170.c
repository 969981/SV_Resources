/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f2170; name: _INIT_1633
 */


void _INIT_1633(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_047e5cc0;
  puVar3 = PTR_DAT_047e5cb8;
  puVar2 = PTR_DAT_047e5c98;
  puVar1 = PTR_DAT_047d3888;
  if ((*PTR_DAT_047e5cb8 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_047e5cc0 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    uVar5 = *(ulong *)puVar1;
    *(undefined **)puVar1 = puVar4;
    *(undefined8 *)puVar3 = 1;
    *(ulong *)puVar4 = uVar5 & 0xfffffffffffffffc;
    *(undefined **)(puVar4 + 8) = puVar2;
  }
  return;
}


