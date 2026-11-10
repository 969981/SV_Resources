/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031410; name: _INIT_541
 */


void _INIT_541(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_047e4b18;
  puVar3 = PTR_DAT_047e4b10;
  puVar2 = PTR_DAT_047e4b08;
  puVar1 = PTR_DAT_047d3888;
  if ((*PTR_DAT_047e4b08 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_047e4b10 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    uVar5 = *(ulong *)puVar1;
    *(undefined **)puVar1 = puVar3;
    *(undefined8 *)puVar2 = 1;
    *(ulong *)puVar3 = uVar5 & 0xfffffffffffffffc;
    *(undefined **)(puVar3 + 8) = puVar4;
  }
  return;
}


