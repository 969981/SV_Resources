/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cd7f4; name: FUN_007cd7f4
 */


void FUN_007cd7f4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  lVar1 = param_2 + 0x178;
  (**(code **)(**(long **)(param_2 + 0x18) + 0x100))(local_38,*(long **)(param_2 + 0x18),lVar1);
  FUN_007e5350(lVar1,*(undefined4 *)(param_2 + 0x158),*(undefined1 *)(param_2 + 0x171));
  FUN_007e5374(lVar1,*(undefined4 *)(param_2 + 0x15c));
  (**(code **)(**(long **)(param_2 + 0x18) + 0x108))
            (local_38,*(long **)(param_2 + 0x18),param_2 + 0x1b8);
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


