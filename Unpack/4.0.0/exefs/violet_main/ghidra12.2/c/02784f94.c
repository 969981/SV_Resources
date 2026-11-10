/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02784f94; name: FUN_02784f94
 */


undefined8 FUN_02784f94(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar1 = FUN_02785024(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8)), lVar1 == 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    FUN_00c43ef0(&local_40,param_2);
    local_30 = *(undefined8 *)(param_2 + 0x10);
    local_28 = *(undefined1 *)(param_2 + 0x18);
    FUN_00c43ef0(lVar1 + 0x270,&local_40);
    *(undefined1 *)(lVar1 + 0x288) = local_28;
    *(undefined8 *)(lVar1 + 0x280) = local_30;
    FUN_027851ac(&local_40);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}


