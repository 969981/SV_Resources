/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f8240; name: FUN_026f8240
 */


bool FUN_026f8240(undefined8 param_1,void *param_2)

{
  float fVar1;
  undefined1 auStack_50 [48];
  
  memcpy(auStack_50,param_2,0x30);
  fVar1 = (float)FUN_026fbb1c(param_1,auStack_50);
  return fVar1 <= *(float *)((long)param_2 + 0x30) * *(float *)((long)param_2 + 0x30);
}


