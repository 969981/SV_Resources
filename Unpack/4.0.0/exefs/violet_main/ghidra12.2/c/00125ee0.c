/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00125ee0; name: FUN_00125ee0
 */


void FUN_00125ee0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) >> 1 & 1) != 0) ||
     (lVar1 = FUN_00125f60(param_1,*(long *)(param_1 + 0x20),&local_18), lVar1 == 0)) {
    lVar1 = FUN_00125b40(param_1,param_2,&DAT_03be609f);
  }
  uVar2 = FUN_0013dfa0(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00125b90(param_1,"%s \'%s\' is not callable (a %s value)",lVar1,local_18,uVar2);
}


