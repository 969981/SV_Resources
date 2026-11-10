/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f761c4; name: FUN_01f761c4
 */


void FUN_01f761c4(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  undefined8 local_50;
  long *local_48;
  byte *local_40;
  byte *local_38;
  long local_30;
  long *plStack_28;
  
  local_48 = (long *)FUN_01cf7e20();
  uStack_5e = 0;
  local_60 = 2;
  uStack_5f = 0x2a;
                    /* try { // try from 01f761ec to 01f761fb has its CatchHandler @ 01f762b8 */
  FUN_006c8b84(&local_40,&local_60,1);
  FUN_006c87ec(param_1,param_2,&local_40);
  pbVar1 = local_40;
  if (local_40 != (byte *)0x0) {
    if (local_38 != local_40) {
      do {
        pbVar2 = local_38 + -0x20;
        if ((*pbVar2 & 1) != 0) {
          (**(code **)(**(long **)(local_38 + -8) + 0x18))
                    (*(long **)(local_38 + -8),*(undefined8 *)(local_38 + -0x10),
                     *(ulong *)(local_38 + -0x20) & 0xfffffffffffffffe,1);
        }
        local_38 = pbVar2;
      } while (pbVar1 != pbVar2);
    }
    local_38 = pbVar1;
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_40,local_30 - (long)local_40,8);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))
              (local_48,local_50,
               CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60))) &
               0xfffffffffffffffe,1);
  }
  return;
}


