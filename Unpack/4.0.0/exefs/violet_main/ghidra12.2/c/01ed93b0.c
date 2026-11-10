/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed93b0; name: FUN_01ed93b0
 */


void FUN_01ed93b0(undefined8 param_1,long param_2)

{
  undefined1 auStack_2e8 [712];
  
  if (*(char *)(param_2 + 0x40) == '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_selected","GetData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mystery_gift/mystery_gift_bcat_list.cpp"
               ,0x21);
  }
  memcpy(auStack_2e8,(void *)(param_2 + 0x48),0x2c8);
  FUN_01c98658(param_1,auStack_2e8);
  return;
}


