/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d77c4; name: FUN_001d77c4
 */


int FUN_001d77c4(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_18;
  
  lVar3 = *param_2;
  param_2[0xbe] = 0x6400000003;
  param_2[0xbf] = 0x4000000000000004;
  *(undefined4 *)(param_2 + 0xc0) = 2;
  *(uint *)((long)param_2 + 0x604) = (uint)(*(long *)(*(long *)(lVar3 + 0xd8) + 0x70) != 0);
  param_2[0xc1] = 3;
  local_18 = param_1;
  lVar2 = FUN_001fa460(param_2 + 0xab,0x50,param_2 + 0xbe,3);
  if (lVar2 == 0) {
    FUN_001db9c8(*param_2,"nghttp2 unexpectedly failed on pack_settings_payload");
    FUN_001d4730(&local_18);
    iVar1 = 2;
  }
  else {
    param_2[0xb5] = lVar2;
    iVar1 = FUN_001cb004(*param_2,param_2 + 0xab,lVar2,&local_38,auStack_40);
    if (iVar1 == 0) {
      iVar1 = FUN_001d4a1c(&local_18,
                           "Connection: Upgrade, HTTP2-Settings\r\nUpgrade: %s\r\nHTTP2-Settings: %s\r\n"
                           ,&DAT_03bd8d74,local_38);
      FUN_001ec308(local_38);
      *(undefined4 *)(lVar3 + 0x19c) = 1;
    }
    else {
      FUN_001d4730(&local_18);
    }
  }
  return iVar1;
}


