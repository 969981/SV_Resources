/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fff7c0; name: FUN_00fff7c0
 */


bool FUN_00fff7c0(double param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  int local_54;
  
  uVar5 = (ulong)*param_2;
  uVar4 = *(ulong *)(param_2 + 2);
  if (uVar5 < uVar4) {
    dVar6 = 0.0;
    do {
      nn::os::GetSystemTick();
      lVar2 = nn::os::ConvertToTimeSpan();
      local_54 = (int)uVar5;
      uVar4 = (*(code *)*param_3)(param_3 + 4,&local_54);
      if ((uVar4 & 1) == 0) {
        param_2[4] = param_2[4] + 1;
      }
      *param_2 = *param_2 + 1;
      nn::os::GetSystemTick();
      lVar3 = nn::os::ConvertToTimeSpan();
      dVar6 = dVar6 + (double)(lVar3 - lVar2) / 1000000000.0;
      if (param_1 < dVar6) {
        if (*(ulong *)(param_2 + 2) <= (ulong)*param_2) goto LAB_00fff800;
        goto LAB_00fff8c4;
      }
      uVar4 = *(ulong *)(param_2 + 2);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < uVar4);
    uVar5 = (ulong)*param_2;
  }
  else if (param_2[4] == 0) {
    return true;
  }
  if (uVar5 < uVar4) {
LAB_00fff8c4:
    bVar1 = false;
  }
  else {
LAB_00fff800:
    bVar1 = param_2[4] == 0;
  }
  return bVar1;
}


