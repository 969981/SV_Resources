/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00508874; name: FUN_00508874
 */


bool FUN_00508874(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined *local_48;
  long *local_40;
  undefined8 local_38;
  int local_30;
  undefined2 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = *param_1;
  local_38 = 0;
  local_30 = 0;
  puVar1 = PTR_DAT_047cdb80 + 0x10;
  local_2c = 1;
                    /* try { // try from 005088a8 to 005088af has its CatchHandler @ 005088f4 */
  local_48 = puVar1;
  local_40 = param_3;
  uStack_24 = local_28;
  FUN_0050892c(param_1,param_2,&local_48);
  cVar2 = local_2c._1_1_;
  if ((local_2c._1_1_ == '\0') && (0 < local_30)) {
    local_48 = puVar1;
                    /* try { // try from 005088d4 to 005088d7 has its CatchHandler @ 005088f0 */
    (**(code **)(*local_40 + 0x18))();
  }
  return cVar2 == '\0';
}


