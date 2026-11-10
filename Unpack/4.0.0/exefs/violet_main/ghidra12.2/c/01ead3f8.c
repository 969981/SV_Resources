/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ead3f8; name: FUN_01ead3f8
 */


void FUN_01ead3f8(long param_1,char *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  char *pcVar2;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  
  pcVar2 = (char *)FUN_019462f4(param_5);
  if ((param_3 != 0) && (*pcVar2 == *(char *)(param_1 + 0x48))) {
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    if (cVar1 == '\x03') {
      if (param_3 == 3) {
        local_190 = CONCAT62(local_190._2_6_,*(undefined2 *)pcVar2);
        FUN_01ead6c8(param_1,&local_190);
      }
    }
    else if (cVar1 == '\x02') {
      if (param_3 == 0x15b) {
        memcpy(&local_190,pcVar2,0x15a);
        FUN_01ead548(param_1,&local_190);
      }
    }
    else if ((cVar1 == '\x01') && (param_3 == 0x15)) {
      local_190 = *(undefined8 *)pcVar2;
      uStack_188 = *(undefined8 *)(param_2 + 9);
      local_180 = *(undefined4 *)(param_2 + 0x11);
      FUN_01ead4d4(param_1,&local_190);
    }
  }
  return;
}


