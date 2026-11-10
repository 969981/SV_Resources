/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c4510; name: FUN_004c4510
 */


void FUN_004c4510(undefined8 *param_1)

{
  mutex *this;
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  this = (mutex *)*param_1;
  if (this != (mutex *)0x0) {
    std::mutex::~mutex(this);
    FUN_0049e790(PTR_LAB_047cba48,this);
  }
  FUN_004c44b4(param_1 + 6,param_1[7]);
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_004a0cb0(lVar1);
    FUN_0049e790(PTR_LAB_047cba48,lVar1);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


