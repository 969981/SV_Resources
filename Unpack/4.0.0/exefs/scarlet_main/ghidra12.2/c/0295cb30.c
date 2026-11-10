/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295cb30; name: FUN_0295cb30
 */


void FUN_0295cb30(long param_1,uint param_2,char param_3,void *param_4)

{
  char cVar1;
  uint local_80 [2];
  char local_78;
  undefined1 local_77;
  ulong local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined7 uStack_44;
  undefined1 local_3d;
  undefined6 uStack_3c;
  undefined1 uStack_36;
  
  FUN_0158253c(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_014616dc();
  if (cVar1 != param_3) {
    local_60 = 0x9c;
    local_80[1] = 8;
    local_70 = (ulong)param_2;
    uStack_68 = 0x2a;
    local_77 = 0;
    uStack_3c = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0;
    uStack_44 = 0;
    local_3d = 0;
    uStack_36 = 1;
    local_80[0] = param_2;
    local_78 = param_3;
    if (param_4 != (void *)0x0) {
      memcpy(&local_5c,param_4,0x24);
    }
    FUN_0293fbf0(param_1,local_80);
  }
  return;
}


