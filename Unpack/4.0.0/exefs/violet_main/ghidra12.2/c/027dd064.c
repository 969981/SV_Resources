/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dd064; name: FUN_027dd064
 */


void FUN_027dd064(undefined8 param_1)

{
  byte local_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined8 local_40;
  long *local_38;
  byte local_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined8 local_20;
  long *local_18;
  
  local_18 = (long *)FUN_01cf7e20();
  local_30 = 8;
  uStack_2b = 0;
  uStack_2f = 0x73675f5f;
  local_38 = (long *)FUN_01cf7e20();
  local_50 = 2;
  uStack_4f = 0x6d;
  uStack_4e = 0;
  FUN_00567e00(param_1,&local_30,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))
              (local_38,local_40,
               CONCAT53(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,local_50))) &
               0xfffffffffffffffe,1);
  }
  if ((local_30 & 1) == 0) {
    return;
  }
  (**(code **)(*local_18 + 0x18))
            (local_18,local_20,
             CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,local_30))) &
             0xfffffffffffffffe,1);
  return;
}


