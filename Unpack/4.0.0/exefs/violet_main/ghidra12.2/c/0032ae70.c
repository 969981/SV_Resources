/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032ae70; name: FUN_0032ae70
 */


void FUN_0032ae70(void)

{
  int iVar1;
  
  FUN_0038dcd0(&DAT_047ef478,&LAB_0032b0a4);
  iVar1 = FUN_0038ebe8(&PTR_s_grpc_client_channel_backup_poll__04495690);
  if (-1 < iVar1) {
    DAT_04495688 = iVar1;
  }
  return;
}


