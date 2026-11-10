/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f70ef8; name: FUN_01f70ef8
 */


char * FUN_01f70ef8(byte *param_1,char *param_2,ulong param_3)

{
  nn::util::TSNPrintf(param_2,param_3,
                      "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                      (ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],(ulong)param_1[3],
                      (ulong)param_1[4],(uint)param_1[5],(uint)param_1[6],(uint)param_1[7],
                      (uint)param_1[8],(uint)param_1[9],(uint)param_1[10],(uint)param_1[0xb],
                      (uint)param_1[0xc],(uint)param_1[0xd],(uint)param_1[0xe],(uint)param_1[0xf]);
  return param_2;
}


