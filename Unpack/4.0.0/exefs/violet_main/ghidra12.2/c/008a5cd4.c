/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a5cd4; name: FUN_008a5cd4
 */


void FUN_008a5cd4(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047d23a8;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 9 & 1) == 0) {
    FUN_00c5b260(param_2,*(undefined8 *)(param_1 + 0x40));
    return;
  }
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) +
                   ((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) +
                   ((ulong)(uVar2 >> 2) & 3) * 0x14);
  (**(code **)PTR_DAT_047d23a8)
            (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)(&DAT_03cbf000 + (ulong)*pbVar1 * 4));
  (**(code **)PTR_DAT_047d23b0)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0));
  FUN_00c5b260(param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x008a5d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar3)(*(long *)(param_1 + 0x40) + 8,8);
  return;
}


